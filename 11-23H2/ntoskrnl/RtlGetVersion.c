/*
 * XREFs of RtlGetVersion @ 0x140758D00
 * Callers:
 *     RtlVerifyVersionInfo @ 0x1403841D0 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403F3340 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x140757284 (SdbpMatchOsVersion.c)
 *     _SysCtxOpenMachine @ 0x140854FF0 (_SysCtxOpenMachine.c)
 *     Win7RtlGetVersion @ 0x140977F20 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x140978000 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1409780E0 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     PopEtInit @ 0x140B6A7E0 (PopEtInit.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1402F7F40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x140758DC0 (RtlGetSuiteMask.c)
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
