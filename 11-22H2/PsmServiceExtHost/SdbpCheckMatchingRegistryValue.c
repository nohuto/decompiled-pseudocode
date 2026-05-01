/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x1800953F0
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x1800951EC (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009611C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 *     memmove_0 @ 0x1800536EE (memmove_0.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslStringPatternMatchExW @ 0x1800992AC (AslStringPatternMatchExW.c)
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
  char *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  _DWORD *Heap; // rax
  const char *v19; // r9
  int v20; // r8d
  int v21; // eax
  _DWORD *v22; // r14
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  char *v29; // rax
  char *v30; // rcx
  char *v31; // rax
  PCWSTR SourceString; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
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
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 1189, (unsigned int)"Failed to allocate memory");
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
    v23 = v21 - 1;
    if ( v23 && (v24 = v23 - 1) != 0 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( Size == v14[3] )
        {
          v28 = memcmp_0(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
          goto LABEL_38;
        }
LABEL_47:
        v15 = 1;
        goto LABEL_49;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v28 = a5 == *v22;
        goto LABEL_38;
      }
      v27 = v26 - 3;
      if ( v27 )
      {
        if ( v27 != 4 )
        {
          v19 = "Unknown registry value data type";
          v20 = 1335;
          goto LABEL_16;
        }
        v28 = a6 == *(_QWORD *)v22;
LABEL_38:
        if ( !v28 )
          goto LABEL_47;
LABEL_48:
        *a9 = 1;
        v15 = 1;
        if ( !v14 )
          goto LABEL_50;
        goto LABEL_49;
      }
      v29 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
      v13 = v29;
      if ( !v29 )
      {
        v20 = 1260;
LABEL_44:
        v19 = "Failed to allocate memory";
        goto LABEL_16;
      }
      memmove_0(v29, v22, (unsigned int)v14[3]);
      v30 = v13;
      for ( *(_WORD *)&v13[2 * ((unsigned __int64)(unsigned int)v14[3] >> 1)] = 0; v30 < &v13[v14[3] & 0xFFFFFFFE]; v30 += 2 )
      {
        if ( !*(_WORD *)v30 )
        {
          if ( !*((_WORD *)v30 + 1) )
            break;
          *(_WORD *)v30 = 59;
        }
      }
    }
    else
    {
      v31 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
      v13 = v31;
      if ( !v31 )
      {
        v20 = 1237;
        goto LABEL_44;
      }
      memmove_0(v31, v22, (unsigned int)v14[3]);
      *(_WORD *)&v13[2 * ((unsigned __int64)(unsigned int)v14[3] >> 1)] = 0;
    }
    if ( (unsigned int)AslStringPatternMatchExW(a4, v13) )
      goto LABEL_48;
    goto LABEL_47;
  }
  v19 = "Failed to read value";
  v20 = 1200;
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
