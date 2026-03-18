/*
 * XREFs of ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0131BC0
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1668 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ @ 0x1C00C0158 (-ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00C1800 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x1C0131C38 (-IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

char __fastcall CRecalcState::MinimizeOnMonitorRemove(
        CRecalcState *this,
        struct tagWND *a2,
        const struct CMonitorTopology::MonitorData *a3,
        const struct CRecalcContext *a4)
{
  DesktopRecalcSettings *v8; // rcx
  __int64 v10; // rdx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v11; // r8
  int v12; // r9d
  PDEVICE_OBJECT v13; // rcx
  char i; // bl
  __int16 v15; // ax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  int v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+5Ch] [rbp-4Ch]
  __int128 v25; // [rsp+60h] [rbp-48h]
  int v26; // [rsp+70h] [rbp-38h]

  if ( !CRecalcState::IsWindowEligibleForMinimize(this, a2) || !DesktopRecalcSettings::ShouldMinimizeOnMonitorRemove(v8) )
    return 0;
  if ( *(_BYTE *)a4 )
  {
    v13 = WPP_GLOBAL_Control;
    i = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      i = 0;
    if ( !(_BYTE)v10 && !i )
      return 0;
    v15 = 41;
    goto LABEL_30;
  }
  v10 = *((_QWORD *)this + 2);
  v16 = 0;
  for ( i = 1; v16 < *(_DWORD *)(v10 + 8); ++v16 )
  {
    v17 = v10 + 8 * (v16 + 8LL * v16 + 2);
    if ( a3 != (const struct CMonitorTopology::MonitorData *)v17
      && CMonitorTopology::GetMonitorFromId(
           (const struct CMonitorTopology::MonitorId *)(v17 + 44),
           v10,
           (__int64)v11,
           v12) )
    {
      break;
    }
    v10 = *((_QWORD *)this + 2);
  }
  if ( v16 == *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      i = 0;
    if ( !(_BYTE)v10 && !i )
      return 0;
    v15 = 42;
LABEL_30:
    LOBYTE(v11) = i;
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v10,
      (_DWORD)v11,
      v12,
      5,
      7,
      v15,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)v11,
      v12,
      4,
      7,
      43,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  v18 = *(_OWORD *)((char *)this + 28);
  v22 = 0LL;
  v23 = 2;
  v25 = v18;
  v24 = 19;
  v26 = 0;
  AdvancedWindowPos::xxxApplyWindowPos(a2, (struct tagWND *)&v22, v11);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      i = 0;
    }
    if ( i || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        i,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v21,
        3u,
        7u,
        0x2Cu,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a2);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v20) = 0;
  }
  if ( (_BYTE)v19 || (_BYTE)v20 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v20,
      v21,
      5,
      7,
      45,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  return 1;
}
