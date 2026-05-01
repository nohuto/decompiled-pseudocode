/*
 * XREFs of ?IsWindowsServer@@YA_NXZ @ 0x1801AB438
 * Callers:
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

bool IsWindowsServer(void)
{
  ULONGLONG v0; // rax
  struct _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  VersionInformation.dwOSVersionInfoSize = 284;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  *(_DWORD *)&VersionInformation.wSuiteMask = 0x10000;
  *(_DWORD *)&VersionInformation.wServicePackMajor = 0;
  v0 = VerSetConditionMask(0LL, 0x80u, 1u);
  return !VerifyVersionInfoW(&VersionInformation, 0x80u, v0);
}
