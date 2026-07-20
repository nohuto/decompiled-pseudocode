/*
 * XREFs of SmpPlatformBinaryTableExists @ 0x140019F7C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

bool SmpPlatformBinaryTableExists()
{
  ULONG ReturnLength; // [rsp+20h] [rbp-38h] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-30h] BYREF

  SystemInformation[3] = 0;
  SystemInformation[0] = 1094930505;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1414546007;
  return NtQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789;
}
