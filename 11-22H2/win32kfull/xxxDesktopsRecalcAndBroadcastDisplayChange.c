/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01F5E60 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C004A114 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C004A790 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SelectWindowRgn @ 0x1C0077C08 (SelectWindowRgn.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C00BFF48 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

void __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        struct tagWINDOWSTATION *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct CMonitorTopology *a5)
{
  char WorkAreasFromShell; // r15
  BOOL v10; // esi
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  struct tagWND *i; // rbx
  char v16; // [rsp+80h] [rbp+18h] BYREF

  WorkAreasFromShell = xxxGetWorkAreasFromShell();
  v10 = a2 != 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  if ( a2 )
  {
    DesktopRecalc::OnMonitorRectsChanged(
      *(DesktopRecalc **)(a1 + 40),
      a2,
      a5,
      (struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
  }
  else
  {
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
        3,
        7,
        10,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
    }
    for ( i = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
          i;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 21LL) & 8) != 0 )
        SelectWindowRgn(i);
    }
  }
  xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 6996LL) != a3, v10, a4);
  if ( WorkAreasFromShell )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
        4,
        7,
        11,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
    }
    xxxSendNotifyMessage(-1LL, 26LL, 47LL, 0LL, 1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
}
