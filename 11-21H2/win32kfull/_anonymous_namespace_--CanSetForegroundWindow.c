/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C00A66BC (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C00A6740 (IsForegroundLocked.c)
 *     IsDebuggerAttached @ 0x1C00A99EC (IsDebuggerAttached.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     _anonymous_namespace_::StrictIAMForegroundCheck @ 0x1C01000B4 (_anonymous_namespace_--StrictIAMForegroundCheck.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  bool v10; // di
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v12; // r8
  int v13; // edx
  int v14; // edx
  char v15; // bp
  int v16; // r8d
  const char *v17; // rax
  __int64 v19; // rdx
  PDEVICE_OBJECT v20; // rcx
  bool v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  PDEVICE_OBJECT v25; // rcx
  bool v26; // di
  bool v27; // r8
  int v28; // edx
  __int16 v29; // [rsp+30h] [rbp-28h]
  __int16 v30; // [rsp+30h] [rbp-28h]

  v4 = a2;
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        30,
        4,
        2,
        30,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    return 1LL;
  }
  if ( *(int *)(v6 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    v20 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v22 = 31;
    goto LABEL_35;
  }
  v7 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    if ( (_DWORD)a2 == 31 )
    {
      v25 = WPP_GLOBAL_Control;
      v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_83;
      v28 = 32;
    }
    else
    {
      if ( !(unsigned __int8)anonymous_namespace_::StrictIAMForegroundCheck() )
        goto LABEL_6;
      v25 = WPP_GLOBAL_Control;
      v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_83:
        gppiLockSFW = 0LL;
        return 2LL;
      }
      v28 = 33;
    }
    v30 = v28;
    LOBYTE(v28) = v26;
    WPP_RECORDER_AND_TRACE_SF_(
      v25->AttachedDevice,
      v28,
      v27,
      a4,
      4,
      2,
      v30,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    goto LABEL_83;
  }
LABEL_6:
  CurrentProcess = PsGetCurrentProcess(v7, a2);
  if ( (unsigned int)IsProcessDwm(CurrentProcess)
    && **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v20 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v22 = 34;
    goto LABEL_35;
  }
  if ( !LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
  {
    if ( (unsigned int)IsDebuggerAttached(v6) && (unsigned int)IsNonImmersiveBand(a1) )
    {
      v20 = WPP_GLOBAL_Control;
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v22 = 35;
      goto LABEL_35;
    }
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v9 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL))
          && (unsigned int)IsNonImmersiveBand(a1) )
        {
          v20 = WPP_GLOBAL_Control;
          v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v22 = 36;
          goto LABEL_35;
        }
      }
    }
  }
  v10 = 1;
  if ( gptiCurrent == GetProp(a1, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 1u) )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v22 = 37;
LABEL_35:
    v29 = v22;
    LOBYTE(v22) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v20->AttachedDevice,
      v22,
      v21,
      a4,
      4,
      2,
      v29,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    return 2LL;
  }
  if ( v6 == gppiScreenSaver )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v22 = 38;
    goto LABEL_35;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 53) == *(_QWORD *)(gptiCurrent + 424LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v19) )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v22 = 39;
    goto LABEL_35;
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, v4, v12, a4) )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        40,
        4,
        2,
        40,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && IAMThreadAccessGranted(gptiCurrent) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
    return 1LL;
  }
  v15 = anonymous_namespace_::CheckCanonicalForegroundAccess(v4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = "HasRight";
    LOBYTE(v14) = v10;
    if ( !v15 )
      v17 = "NoRights";
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v16,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      41,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (__int64)v17);
  }
  if ( v15 )
    return 2LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && IAMThreadAccessGranted(gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
  return 0LL;
}
