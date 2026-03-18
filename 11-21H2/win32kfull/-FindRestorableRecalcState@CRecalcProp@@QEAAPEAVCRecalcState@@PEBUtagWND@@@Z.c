/*
 * XREFs of ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_N_N@Z @ 0x1C0121F10 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_N_N@Z.c)
 *     ?IsRotation@CRecalcState@@QEBA_NXZ @ 0x1C015CB50 (-IsRotation@CRecalcState@@QEBA_NXZ.c)
 */

struct CRecalcState *__fastcall CRecalcProp::FindRestorableRecalcState(CRecalcProp *this, const struct tagWND *a2)
{
  int v4; // edx
  const struct CMonitorTopology *v5; // r8
  PDEVICE_OBJECT v6; // rcx
  int v7; // r9d
  CRecalcState *v8; // rcx
  __int64 v9; // rcx
  const struct tagWND *v11; // rdx
  bool HasFullscreenState; // al
  bool v13; // si
  CRecalcState *v14; // rcx
  int v15; // edx
  int v16; // r8d
  CRecalcState *i; // rbx
  int v18; // edx
  int v19; // r8d

  if ( (unsigned int)GetWindowCloakState(a2) )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x10) == 0 )
  {
    v6 = WPP_GLOBAL_Control;
    LOBYTE(v5) = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v4) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v5) = 0;
    if ( !(_BYTE)v4 && !(_BYTE)v5 )
      return 0LL;
    v7 = 43;
    goto LABEL_25;
  }
  v8 = (CRecalcState *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( CRecalcState::IsRotation(v8) )
    {
      v6 = WPP_GLOBAL_Control;
      LOBYTE(v5) = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v4) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v5) = 0;
      if ( !(_BYTE)v4 && !(_BYTE)v5 )
        return 0LL;
      v7 = 44;
LABEL_25:
      WPP_RECORDER_AND_TRACE_SF_(
        v6->AttachedDevice,
        v4,
        (_DWORD)v5,
        v7,
        5,
        23,
        v7,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      return 0LL;
    }
    v11 = *(const struct tagWND **)(v9 + 32);
  }
  else
  {
    v11 = 0LL;
  }
  HasFullscreenState = AdvancedWindowPos::HasFullscreenState(a2, v11, v5);
  v13 = HasFullscreenState;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0
    || (v14 = (CRecalcState *)*((_QWORD *)this + 3)) == 0LL
    || !CRecalcState::ShouldRestoreWindowToState(v14, HasFullscreenState) )
  {
    for ( i = (CRecalcState *)*((_QWORD *)this + 4); i; i = (CRecalcState *)*((_QWORD *)i + 1) )
    {
      if ( CRecalcState::ShouldRestoreWindowToState(i, v13) )
      {
        LOBYTE(v19) = 1;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v18) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v19) = 0;
        }
        if ( (_BYTE)v18 || (_BYTE)v19 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            46,
            5,
            23,
            46,
            (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
        return i;
      }
    }
    return 0LL;
  }
  LOBYTE(v16) = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v16) = 0;
  if ( (_BYTE)v15 || (_BYTE)v16 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      45,
      5,
      23,
      45,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  return (struct CRecalcState *)*((_QWORD *)this + 3);
}
