/*
 * XREFs of RtlGetVersion @ 0x1406C2630
 * Callers:
 *     RtlVerifyVersionInfo @ 0x1403B2B70 (RtlVerifyVersionInfo.c)
 *     sub_1403FB1CC @ 0x1403FB1CC (sub_1403FB1CC.c)
 *     sub_140827BDC @ 0x140827BDC (sub_140827BDC.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_1409658C0 @ 0x1409658C0 (sub_1409658C0.c)
 *     sub_1409659A0 @ 0x1409659A0 (sub_1409659A0.c)
 *     sub_140965A80 @ 0x140965A80 (sub_140965A80.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1406C26F0 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD v2; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  v2 = lpVersionInformation->dwOSVersionInfoSize - 284;
  NtProductType = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v2 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(dword_140C4E588);
    v3 = (unsigned __int8)dword_140C4E588;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)dword_140C4E560 == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&NtProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = NtProductType;
      SuiteMask = RtlGetSuiteMask();
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
