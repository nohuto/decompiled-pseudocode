/*
 * XREFs of ?GetTotalPhysicalMemory@DefaultMemoryStatsProvider@Utils@Spectre@@UEBA_KXZ @ 0x180021210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

DWORDLONG __fastcall Spectre::Utils::DefaultMemoryStatsProvider::GetTotalPhysicalMemory(
        Spectre::Utils::DefaultMemoryStatsProvider *this)
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
