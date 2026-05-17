/*
 * XREFs of RtlpHpOverrideGCInterval @ 0x180100C58
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0588 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpHpOverrideGCInterval(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  int result; // eax
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v4; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+60h] [rbp-A0h]
  __int64 v7; // [rsp+68h] [rbp-98h]
  int *v8; // [rsp+70h] [rbp-90h]
  int v9; // [rsp+78h] [rbp-88h]
  __int128 v10; // [rsp+80h] [rbp-80h]
  _OWORD v11[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v12[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  memset_thunk_772440563353939046(v12, 0, 0x200uLL);
  v3 = 0x2000000;
  v4 = v12;
  memset(v11, 0, 24);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, &qword_180134878);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, (const void **)&DestinationString);
  v6 = 48;
  v8 = &v3;
  v7 = 0LL;
  v9 = 64;
  v10 = 0LL;
  result = NtOpenKey();
  if ( result >= 0 )
  {
    result = NtQueryValueKey();
    if ( result >= 0 )
    {
      result = -10000000 * HIDWORD(v11[0]);
      RtlpHpGCInterval = -10000000LL * *(_QWORD *)((char *)v11 + 12);
    }
  }
  return result;
}
