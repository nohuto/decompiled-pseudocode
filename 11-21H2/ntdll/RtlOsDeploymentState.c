/*
 * XREFs of RtlOsDeploymentState @ 0x18010E9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 RtlOsDeploymentState()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  UNICODE_STRING v3; // [rsp+50h] [rbp-68h] BYREF
  int v4; // [rsp+60h] [rbp-58h]
  __int64 v5; // [rsp+68h] [rbp-50h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-48h]
  int v7; // [rsp+78h] [rbp-40h]
  __int128 v8; // [rsp+80h] [rbp-38h]
  int v9; // [rsp+94h] [rbp-24h]
  int v10; // [rsp+98h] [rbp-20h]
  int v11; // [rsp+9Ch] [rbp-1Ch]

  v0 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v4 = 48;
  v5 = 0LL;
  v7 = 576;
  p_DestinationString = &DestinationString;
  v8 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v3, L"Compact");
    if ( (int)NtQueryValueKey() >= 0 && v9 == 4 && v10 == 4 && v11 )
      return 2;
  }
  return v0;
}
