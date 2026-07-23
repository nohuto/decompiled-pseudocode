/*
 * XREFs of LdrInitializeMrdata @ 0x1800AFA90
 * Callers:
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 */

NTSTATUS LdrInitializeMrdata()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+38h] [rbp-40h]
  __int64 v3; // [rsp+48h] [rbp-30h]

  LdrpMrdataLock.0 = 0LL;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    LdrpAllocationGranularity = v2;
    LdrpMaximumUserModeAddress = v3;
    return 0;
  }
  return result;
}
