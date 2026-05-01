/*
 * XREFs of SdbOpenApphelpResourceFile @ 0x1800918B0
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x1800921C4 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     SdbpGetSystemSdbFilePath @ 0x1800930DC (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

HMODULE SdbOpenApphelpResourceFile()
{
  HMODULE Library; // rbx
  int v1; // edx
  int v2; // r9d
  __int64 v4; // [rsp+28h] [rbp-230h]
  WCHAR LibFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  Library = 0LL;
  memset_0(LibFileName, 0, 0x208uLL);
  if ( (int)SdbpGetSystemSdbFilePath((unsigned int)LibFileName, v1, 8, v2, 0LL, 0LL) >= 0 )
  {
    Library = LoadLibraryExW(LibFileName, 0LL, 2u);
    if ( !Library )
    {
      LODWORD(v4) = GetLastError();
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbOpenApphelpResourceFile",
        265,
        (unsigned int)"Failed to open the Apphelp resource file %ws [Gle=%u]",
        0LL,
        v4);
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbOpenApphelpResourceFile", 254, (unsigned int)"SdbGetPathResourceDll failed.");
  }
  return Library;
}
