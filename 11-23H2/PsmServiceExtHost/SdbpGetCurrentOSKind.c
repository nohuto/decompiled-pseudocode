/*
 * XREFs of SdbpGetCurrentOSKind @ 0x180090ED4
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall SdbpGetCurrentOSKind(_DWORD *a1)
{
  __int64 result; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  char v4; // [rsp+13Ah] [rbp-1Eh]

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  result = (unsigned int)(v4 != 1) + 1;
  *a1 = result;
  return result;
}
