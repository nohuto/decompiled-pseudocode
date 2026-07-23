/*
 * XREFs of sub_140A111BC @ 0x140A111BC
 * Callers:
 *     sub_140A10FDC @ 0x140A10FDC (sub_140A10FDC.c)
 *     sub_140A11E1C @ 0x140A11E1C (sub_140A11E1C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A111BC(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v12; // r15
  _WORD *v13; // rsi
  _DWORD *v14; // rbx
  unsigned int v15; // edi
  const WCHAR *v16; // rdx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  _DWORD *v23; // r14
  bool v24; // zf
  _WORD *v25; // rax
  _WORD *v26; // rcx
  _WORD *v28; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  __int16 *v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  SourceString = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  if ( !Str1 || !*Str1 )
    goto LABEL_35;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v17 = sub_14075B1B8(&SourceString, Str1);
    v12 = (WCHAR *)SourceString;
    if ( v17 < 0 )
      goto LABEL_39;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_39;
  }
  v20 = sub_14075B444(v19, ResultLength);
  v14 = v20;
  if ( !v20 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingRegistryValue");
    goto LABEL_39;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v20, ResultLength, &ResultLength) < 0 )
    goto LABEL_14;
  v22 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_36;
  }
  if ( v22 != a3 )
    goto LABEL_17;
  v23 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  if ( !v22 )
    goto LABEL_14;
  if ( v22 <= 2 )
  {
    v28 = sub_14075B444(v21, (unsigned int)v14[3] + 2LL);
    v13 = v28;
    if ( !v28 )
      goto LABEL_14;
    memmove(v28, v23, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
LABEL_47:
    if ( !(unsigned int)sub_140851068(v32, v13) )
      goto LABEL_48;
LABEL_35:
    *a9 = 1;
    v15 = 1;
    if ( !v14 )
      goto LABEL_37;
    goto LABEL_36;
  }
  switch ( v22 )
  {
    case 3u:
      if ( Size != v14[3] )
        goto LABEL_48;
      v24 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_34:
      if ( v24 )
        goto LABEL_35;
LABEL_48:
      v15 = 1;
      goto LABEL_36;
    case 4u:
      v24 = a5 == *v23;
      goto LABEL_34;
    case 7u:
      v25 = sub_14075B444(v21, (unsigned int)v14[3] + 2LL);
      v13 = v25;
      if ( !v25 )
        break;
      memmove(v25, v23, (unsigned int)v14[3]);
      v26 = v13;
      for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
            v26 < (_WORD *)((char *)v13 + (v14[3] & 0xFFFFFFFE));
            ++v26 )
      {
        if ( !*v26 )
        {
          if ( !v26[1] )
            goto LABEL_47;
          *v26 = 59;
        }
      }
      goto LABEL_47;
    case 0xBu:
      v24 = a6 == *(_QWORD *)v23;
      goto LABEL_34;
  }
LABEL_14:
  sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingRegistryValue");
LABEL_36:
  ExFreePoolWithTag(v14, 0x74705041u);
LABEL_37:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
LABEL_39:
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v15;
}
