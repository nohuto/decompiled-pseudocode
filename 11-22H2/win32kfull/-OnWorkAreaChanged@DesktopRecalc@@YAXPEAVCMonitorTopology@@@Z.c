/*
 * XREFs of ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C00BFD54
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00BE6F8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00C03E0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const struct _GUID *v5; // r9
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // [rsp+68h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  v5 = CRapidHpdInfo::s_pRapidHpdInfo;
  v6 = 0LL;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        (__int64)gFullLog,
        3u,
        7u,
        0xCu,
        (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
        *(_DWORD *)(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4 + 4LL));
    v6 = *(volatile signed __int32 **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
    _InterlockedIncrement(v6);
    CRapidHpdInfo::Delete(2u, v3, v4);
    if ( v6 )
      this = (DesktopRecalc *)v6;
  }
  DesktopRecalc::StartRecalc(0LL, this, 0LL, v5);
  if ( v6 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    Win32FreePool((void *)v6);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9, v7, v8);
}
