/*
 * XREFs of _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8
 * Callers:
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::_lambda_invoker_cdecl_ @ 0x1C00764E0 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzCalcStartCursorHide @ 0x1C0073330 (zzzCalcStartCursorHide.c)
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C00767D8 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0076BC8 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C0122BD0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C023AEE8 (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 */

void __fastcall lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator()(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // di
  unsigned int v9; // eax
  __int64 v10; // rdx
  const struct _GUID *v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  RIMWatchDog();
  v3 = 0;
  v4 = 0xFFFFF78000000004uLL;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v4 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v5 = ((v4 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo;
    if ( v5 >= CRapidHpdInfo::s_timeoutMs )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
      v8 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          14,
          (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids,
          v5,
          *((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5));
      v9 = CMonitorTopology::CompareToCurrent(*((_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5), v6, v7);
      v12 = v9;
      if ( v9 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v10) = 0;
        }
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            (_DWORD)v11,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            16,
            (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids,
            v9);
        DesktopRecalc::OnRapidHpdComparisonFailed(
          *((DesktopRecalc **)CRapidHpdInfo::s_pRapidHpdInfo + 5),
          (struct CRapidHpdInfo *)((char *)CRapidHpdInfo::s_pRapidHpdInfo + 24),
          v11);
        v3 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = v8;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            (_DWORD)v11,
            (unsigned int)&WPP_09036311ad093020396ace1b470b3bee_Traceguids,
            4,
            23,
            15,
            (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids);
        }
      }
      CRapidHpdInfo::Delete(v3, v10, v11, v12);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
    }
  }
  ForegroundLaunch::OnDaemonTimer((ForegroundLaunch *)v4);
  DoPowerStateAndMonitor();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
    zzzCalcStartCursorHide(0LL, 0LL);
  xxxHungAppDaemon();
}
