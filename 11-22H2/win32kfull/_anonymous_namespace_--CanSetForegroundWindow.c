/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     IsDebuggerAttached @ 0x1C005FB64 (IsDebuggerAttached.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C005FED4 (IsForegroundLocked.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r14
  PDEVICE_OBJECT v7; // rcx
  char v8; // di
  int v9; // edx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  char v22; // r14
  const char *v23; // rax
  int v24; // eax
  __int16 v25; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        37,
        4,
        2,
        37,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    }
    return 1LL;
  }
  if ( *(int *)(v6 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 38;
LABEL_88:
    v25 = v9;
    LOBYTE(v9) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v7->AttachedDevice,
      v9,
      a3,
      a4,
      4,
      2,
      v25,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    return 2LL;
  }
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && (_DWORD)a2 == 31 )
  {
    gppiLockSFW = 0LL;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 39;
    goto LABEL_88;
  }
  CurrentProcess = PsGetCurrentProcess(grpdeskRitInput, a2, a3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess)
    && **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 40;
    goto LABEL_88;
  }
  if ( !LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    if ( (unsigned int)IsDebuggerAttached(v6) && (unsigned int)IsNonImmersiveBand(a1, v11, v12) )
    {
      v7 = WPP_GLOBAL_Control;
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v9 = 41;
      goto LABEL_88;
    }
    if ( gpqForeground )
    {
      v13 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v13 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL))
          && (unsigned int)IsNonImmersiveBand(a1, v14, v15) )
        {
          v7 = WPP_GLOBAL_Control;
          v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v9 = 42;
          goto LABEL_88;
        }
      }
    }
  }
  v8 = 1;
  if ( gptiCurrent == GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), 1LL) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 43;
    goto LABEL_88;
  }
  if ( v6 == gppiScreenSaver )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 44;
    goto LABEL_88;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 53) == *(_QWORD *)(gptiCurrent + 424LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v17, v17) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 45;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, v4) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        46,
        4,
        2,
        46,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    }
    if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
    {
      LOBYTE(v20) = IAMThreadAccessGranted(gptiCurrent);
      if ( v20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1645LL);
    }
    return 1LL;
  }
  v22 = anonymous_namespace_::CheckCanonicalForegroundAccess(v4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = "HasRight";
    if ( !v22 )
      v23 = "NoRights";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0x2Fu,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v23);
  }
  if ( v22 )
    return 2LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    LOBYTE(v24) = IAMThreadAccessGranted(gptiCurrent);
    if ( v24 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1663LL);
  }
  return 0LL;
}
