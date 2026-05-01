/*
 * XREFs of SdbpGetCurrentOSKind @ 0x180091234
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090D70 (SdbInitDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
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
