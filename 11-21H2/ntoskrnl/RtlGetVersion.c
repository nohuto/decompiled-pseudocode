/*
 * XREFs of RtlGetVersion @ 0x1406C2630
 * Callers:
 *     RtlVerifyVersionInfo @ 0x1403B2B70 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB1CC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     _SysCtxOpenMachine @ 0x140827BDC (_SysCtxOpenMachine.c)
 *     SdbpMatchOsVersion @ 0x1408436C0 (SdbpMatchOsVersion.c)
 *     Win7RtlGetVersion @ 0x1409658C0 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1409659A0 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x140965A80 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1406C26F0 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  ULONG v2; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  v2 = lpVersionInformation->dwOSVersionInfoSize - 284;
  v7 = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v2 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v3 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&v7) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = v7;
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
