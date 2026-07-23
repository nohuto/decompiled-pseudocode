/*
 * XREFs of sub_1403FB1CC @ 0x1403FB1CC
 * Callers:
 *     sub_1403DE98C @ 0x1403DE98C (sub_1403DE98C.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1403B6B30 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FDBC8 @ 0x1403FDBC8 (sub_1403FDBC8.c)
 *     sub_1403FDD40 @ 0x1403FDD40 (sub_1403FDD40.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 */

__int64 __fastcall sub_1403FB1CC(unsigned int a1)
{
  __int64 result; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  result = (unsigned int)dword_140C0DD04;
  if ( (dword_140C0DD04 & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      sub_14056AF38(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      sub_14056AF38(1853059702LL);
    }
    sub_1403FDBC8(1LL);
    if ( (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0 )
      dword_140C094E0 |= 0x10u;
    dword_140C094E0 &= ~0x20u;
    return sub_1403FDD40(a1);
  }
  return result;
}
