/*
 * XREFs of SdbOpenApphelpResourceFile @ 0x180091550
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x180091E64 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     SdbpGetSystemSdbFilePath @ 0x180092D7C (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
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
