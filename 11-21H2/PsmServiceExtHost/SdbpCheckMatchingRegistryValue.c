/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x18009A330
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x18009A12C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009B05C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 *     AslStringPatternMatchExW @ 0x18009E894 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *String1,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  char *v13; // r14
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  _DWORD *Heap; // rax
  const char *v19; // r9
  int v20; // r8d
  unsigned int v21; // eax
  _DWORD *v22; // rsi
  bool v23; // zf
  char *v24; // rax
  char *v25; // rcx
  char *v26; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+38h] BYREF

  SourceString = 0LL;
  ResultLength = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !String1 || !*String1 )
    goto LABEL_48;
  if ( _wcsicmp(String1, L"dbRegistryDefaultName") )
  {
    if ( (int)AslStringDuplicate(&SourceString, String1) < 0 )
      goto LABEL_52;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v17 < 0 && v17 != -2147483643 && v17 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_52;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
  v14 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 983, (unsigned int)"Failed to allocate memory");
    goto LABEL_52;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, Heap, ResultLength, &ResultLength) >= 0 )
  {
    v21 = v14[1];
    if ( !a3 )
    {
      *a9 = 1;
LABEL_19:
      v15 = 1;
      goto LABEL_49;
    }
    if ( v21 != a3 )
      goto LABEL_19;
    v22 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
    if ( !v21 )
      goto LABEL_47;
    if ( v21 > 2 )
    {
      switch ( v21 )
      {
        case 3u:
          if ( Size != v14[3] )
            goto LABEL_46;
          v23 = memcmp_0(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
          break;
        case 4u:
          v23 = a5 == *v22;
          break;
        case 7u:
          v24 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
          v13 = v24;
          if ( !v24 )
          {
            v20 = 1054;
LABEL_43:
            v19 = "Failed to allocate memory";
            goto LABEL_16;
          }
          memmove_0(v24, v22, (unsigned int)v14[3]);
          v25 = v13;
          for ( *(_WORD *)&v13[2 * ((unsigned __int64)(unsigned int)v14[3] >> 1)] = 0;
                v25 < &v13[v14[3] & 0xFFFFFFFE];
                v25 += 2 )
          {
            if ( !*(_WORD *)v25 )
            {
              if ( !*((_WORD *)v25 + 1) )
                break;
              *(_WORD *)v25 = 59;
            }
          }
LABEL_45:
          if ( (unsigned int)AslStringPatternMatchExW(a4, v13) )
            goto LABEL_48;
LABEL_46:
          v15 = 1;
          goto LABEL_49;
        case 0xBu:
          v23 = a6 == *(_QWORD *)v22;
          break;
        default:
LABEL_47:
          v19 = "Unknown registry value data type";
          v20 = 1129;
          goto LABEL_16;
      }
      if ( !v23 )
        goto LABEL_46;
LABEL_48:
      *a9 = 1;
      v15 = 1;
      if ( !v14 )
        goto LABEL_50;
      goto LABEL_49;
    }
    v26 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
    v13 = v26;
    if ( !v26 )
    {
      v20 = 1031;
      goto LABEL_43;
    }
    memmove_0(v26, v22, (unsigned int)v14[3]);
    *(_WORD *)&v13[2 * ((unsigned __int64)(unsigned int)v14[3] >> 1)] = 0;
    goto LABEL_45;
  }
  v19 = "Failed to read value";
  v20 = 994;
LABEL_16:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", v20, (_DWORD)v19);
LABEL_49:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
LABEL_50:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
LABEL_52:
  if ( SourceString )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
  return v15;
}
