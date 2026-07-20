/*
 * XREFs of SmpGetSoftBootStatus @ 0x140011FBC
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

bool SmpGetSoftBootStatus()
{
  bool result; // al
  _BYTE SystemInformation[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v2; // [rsp+38h] [rbp-20h]

  NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
  SmpSoftBoot = (v2 & 4) != 0;
  result = (v2 & 0x20) != 0;
  SmpSoftBootSystemHiveReady = result;
  SmpBugcheckRecovery = (v2 & 0x4000) != 0;
  return result;
}
