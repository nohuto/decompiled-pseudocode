/*
 * XREFs of ?xxxFullscreenRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopology@@@Z @ 0x1C023B3FC
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall CRecalcState::xxxFullscreenRestore(
        __int64 a1,
        AdvancedWindowPos *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3,
        int a4)
{
  __int64 v4; // r12
  AdvancedWindowPos *v5; // rbp
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  bool v14; // bl
  __int128 v15; // xmm0
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  int v18; // [rsp+50h] [rbp-68h]
  int v19; // [rsp+54h] [rbp-64h]
  __int128 v20; // [rsp+58h] [rbp-60h]
  int v21; // [rsp+68h] [rbp-50h]

  v4 = (__int64)a3;
  v5 = a2;
  if ( !*(_BYTE *)(a1 + 61) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v7 = *((_QWORD *)v5 + 5);
  LODWORD(v16) = 0;
  if ( (*(_BYTE *)(v7 + 20) & 0x40) == 0 )
  {
    if ( (*(_BYTE *)(v7 + 31) & 0x20) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        a4,
        4,
        23,
        15,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
    v15 = *(_OWORD *)(a1 + 44);
    v17 = 0LL;
    v18 = 0;
    v20 = v15;
    v19 = 27;
    v21 = v16;
    AdvancedWindowPos::xxxApplyWindowPos(v5, (struct tagWND *)&v17, a3);
    return 160LL;
  }
  if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      a4,
      4,
      23,
      13,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  v9 = MonitorFromRect((struct tagRECT *)(a1 + 44), 0, *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL));
  if ( v9 )
  {
    anonymous_namespace_::xxxMigrateWindow(
      v5,
      v9,
      (struct tagRECT *)(*((_QWORD *)v5 + 5) + 88LL),
      0LL,
      v4,
      0,
      (unsigned int *)&v16);
    return 160LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = v8;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      v12,
      2,
      23,
      14,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  return 0LL;
}
