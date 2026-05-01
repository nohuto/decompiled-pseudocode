/*
 * XREFs of SdbOpenApphelpResourceFile @ 0x180096784
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x180097088 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbpGetSystemSdbFilePath @ 0x18009809C (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

HMODULE SdbOpenApphelpResourceFile()
{
  HMODULE Library; // rbx
  int v1; // edx
  int v2; // r9d
  WCHAR LibFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  Library = 0LL;
  memset_0(LibFileName, 0, 0x208uLL);
  if ( (int)SdbpGetSystemSdbFilePath((unsigned int)LibFileName, v1, 8, v2, 0LL, 0LL) >= 0 )
  {
    Library = LoadLibraryExW(LibFileName, 0LL, 2u);
    if ( !Library )
    {
      GetLastError();
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbOpenApphelpResourceFile",
        265,
        (unsigned int)"Failed to open the Apphelp resource file %ws [Gle=%u]");
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbOpenApphelpResourceFile", 254, (unsigned int)"SdbGetPathResourceDll failed.");
  }
  return Library;
}
