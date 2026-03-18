/*
 * XREFs of xxxSwitchDesktop @ 0x1C006BB2C
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C0049DF8 (RemoteDisableScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C00B4300 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00B444C (xxxSwitchDesktopWithFade.c)
 *     RemoteRedrawScreen @ 0x1C01334E0 (RemoteRedrawScreen.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     IPostQuitMessage @ 0x1C003C308 (IPostQuitMessage.c)
 *     SetTimerCoalescingTolerance @ 0x1C003CD20 (SetTimerCoalescingTolerance.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C004A790 (xxxBroadcastDisplaySettingsChange.c)
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C005C644 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     GreDesktopSwitch @ 0x1C006CE0C (GreDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C006CEE0 (FreeAllSpbs.c)
 *     ClearKeyboardStates @ 0x1C006CF0C (ClearKeyboardStates.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C006CFB4 (DrvOcclusionStateChangeNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1C006D084 (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x1C006D184 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C006DB84 (GreLddmProcessDesktopSwitch.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C006E8A8 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     DwmSyncDesktopSwitch @ 0x1C006E974 (DwmSyncDesktopSwitch.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C006EC78 (EraseBitmap.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     SuppressPointerDeviceContacts @ 0x1C013B8BC (SuppressPointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01E77C0 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  PDEVICE_OBJECT *v7; // r8
  char v8; // si
  char v9; // bl
  _UNKNOWN **v10; // r9
  bool v11; // r15
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  char v15; // bl
  bool v16; // r14
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  struct _KTHREAD *CurrentThread; // rbx
  int v21; // edx
  struct tagEDGY_DATA *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rbx
  int v33; // r14d
  Edgy *v34; // rcx
  struct tagWND **v35; // rcx
  int v36; // r13d
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  int v44; // r8d
  __int64 v45; // rcx
  int v46; // ebx
  unsigned int v47; // ebx
  _QWORD *v48; // rdx
  __int64 v49; // r12
  const struct tagWND *v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r15
  int v53; // r8d
  unsigned int WindowCloakState; // eax
  int v55; // r8d
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  PETHREAD *v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *i; // rbx
  __int64 v67; // rcx
  int v68; // eax
  __m128i si128; // xmm0
  int v70; // eax
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // edx
  int ObjectType; // [rsp+20h] [rbp-B9h]
  void *Handle; // [rsp+50h] [rbp-89h] BYREF
  __int64 v76; // [rsp+58h] [rbp-81h]
  __int64 v77; // [rsp+60h] [rbp-79h]
  PETHREAD Thread; // [rsp+68h] [rbp-71h]
  __int128 v79; // [rsp+70h] [rbp-69h] BYREF
  __int64 v80; // [rsp+80h] [rbp-59h]
  __int128 v81; // [rsp+88h] [rbp-51h] BYREF
  __int64 v82; // [rsp+98h] [rbp-41h]
  _QWORD v83[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v84[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v86; // [rsp+D8h] [rbp-1h]
  __int128 v87; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v88; // [rsp+F0h] [rbp+17h]

  v82 = 0LL;
  v80 = 0LL;
  v88 = 0LL;
  v5 = a1;
  v81 = 0LL;
  v79 = 0LL;
  v76 = gptiCurrent;
  Handle = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v85 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v5 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v5 + 64) & 4) != 0 )
    return 3221225485LL;
  v77 = *(_QWORD *)(v5 + 56);
  v7 = &WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v9 = 0;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
      ObQueryNameInfo(a2);
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v9;
    WPP_RECORDER_AND_TRACE_SF_SL(WPP_GLOBAL_Control->AttachedDevice, v12, v13, v14);
    v7 = &WPP_GLOBAL_Control;
    v10 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
        ObQueryNameInfo(a2);
      LOBYTE(v18) = v16;
      LOBYTE(v17) = v15;
      WPP_RECORDER_AND_TRACE_SF_S(WPP_GLOBAL_Control->AttachedDevice, v17, v18, v19);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_DWORD *)(v5 + 64) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 26;
      LOBYTE(v21) = v8;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        (_DWORD)v7,
        (_DWORD)v10,
        4,
        8,
        26,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, &v87, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, &v85, (__int64)AllowDesktopDestruction);
  v24 = v76;
  if ( *(_QWORD *)(v76 + 456) )
  {
    zzzCancelJournalling(v23, v22);
    SuppressPointerDeviceContacts();
  }
  v25 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v84[0] = *(_QWORD *)(v24 + 416);
    *(_QWORD *)(v24 + 416) = v84;
    v84[2] = 0LL;
    v84[1] = v25;
    HMLockObject(v25);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v27, v26, v28);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v22 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        v83[0] = grpdeskRitInput + 88LL;
        v83[1] = *(_QWORD *)(gpqForeground + 128LL);
        HMAssignmentLock(v83, 0LL);
        xxxSetForegroundWindow2(0LL, (PETHREAD *)v24, 0x20u);
      }
    }
  }
  if ( grpdeskRitInput )
  {
    v29 = (_QWORD *)(grpdeskRitInput + 176LL);
    v30 = *(_QWORD **)(grpdeskRitInput + 176LL);
    if ( (_QWORD *)*v29 != v29 )
    {
      do
      {
        v31 = *(v30 - 39);
        if ( (*(_DWORD *)(v31 + 396) & 1) != 0 )
          PostUpdateKeyStateEvent(*(v30 - 39));
        *(_DWORD *)(v31 + 396) &= ~0x100u;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v29 );
    }
  }
  if ( grpdeskRitInput && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
  {
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
    v32 = *(_QWORD *)(gpDispInfo + 40LL);
    GreLockDynamicModeChange(v32);
    GreUnlockDynamicModeChange(v32);
    if ( *(_QWORD *)(v5 + 120) )
      EraseBitmap();
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  if ( grpdeskRitInput )
  {
    v34 = *(Edgy **)(grpdeskRitInput + 248LL);
    if ( v34 )
      Edgy::FreeEdgyFrameData(v34, v22);
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch();
  CitDesktopSwitch();
  v35 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v35 + 16) & 1) != 0 )
    ComposeWindow(v35[3]);
  FreeAllSpbs();
  v36 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v36 >= 0 )
  {
    v37 = v77;
    v38 = *(_QWORD *)(v77 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v77 + 16) + 432LL) != v38 )
    {
      AllocQueue(0LL, v38);
      tagQ::zzzAttachToQueue(*(tagQ **)(v37 + 24), *(struct tagTHREADINFO **)(v37 + 16), 0LL);
    }
    v36 = zzzSetDesktop(*(struct tagTHREADINFO **)(v37 + 16), a2, 0LL);
    if ( v36 >= 0 )
    {
      v41 = *(_QWORD *)(v37 + 16);
      if ( *(_QWORD *)(v41 + 456) != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4174LL);
      if ( a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4175LL);
      v42 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v42 + 64) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v42, v41, v39, v40);
        v43 = (void *)UserReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
        DwmSyncDesktopSwitch(v43);
        EnterCrit(1LL, 0LL);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4189LL);
      if ( !v33 || (v44 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v44 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1,
        v44,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v33 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0);
      }
      v45 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      *(_QWORD *)&v79 = *(_QWORD *)(v24 + 416);
      *(_QWORD *)(v24 + 416) = &v79;
      *((_QWORD *)&v79 + 1) = v45;
      if ( v45 )
        HMLockObject(v45);
      GreLddmProcessDesktopSwitch();
      if ( !v33 || (v46 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v46 = 1;
      v47 = (4 * (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1)) | v46;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v47);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 323);
      if ( !gbIgnoreStressedOutStuff && a2 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4243LL);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v47);
      v49 = a2 + 88;
      v50 = *(const struct tagWND **)(a2 + 88);
      if ( !v50
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(a2 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(*((_QWORD *)v50 + 5) + 232LL) & 0x40) != 0 && (GetWindowCloakState(v50) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*((_QWORD *)v50 + 2) + 424LL)
        && (GetWindowCloakState(v50) & 1) != 0 )
      {
        v50 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
        if ( v50 )
        {
          do
          {
            v51 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL);
            v52 = *(_QWORD *)(*((_QWORD *)v50 + 2) + 424LL);
            if ( !(unsigned int)IsNonImmersiveBand(v50, v48, 0LL)
              || v51 == v52
              || (v48 = (_QWORD *)((char *)v50 + 40), (*(_BYTE *)(*((_QWORD *)v50 + 5) + 232LL) & 0x40) != 0) )
            {
              WindowCloakState = GetWindowCloakState(v50);
              if ( v51 != v52 || (v55 = 1, (WindowCloakState & 1) == 0) )
                v55 = 0;
              v48 = (_QWORD *)((char *)v50 + 40);
              if ( WindowCloakState || (v56 = 0, (*(_BYTE *)(*v48 + 27LL) & 8) != 0) )
                v56 = 1;
              if ( v55 || (v53 = 0, v56) )
                v53 = 1;
            }
            LOBYTE(v48) = *(_BYTE *)(*v48 + 31LL) & 0x18;
            if ( (_BYTE)v48 == 16 && !v53 )
              break;
            v50 = (const struct tagWND *)*((_QWORD *)v50 + 11);
          }
          while ( v50 );
          v49 = a2 + 88;
        }
      }
      HMAssignmentUnlock(v49);
      if ( v50 )
      {
        if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(*((_QWORD *)v50 + 2) + 456LL) != grpdeskRitInput )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4351LL);
        v60 = (PETHREAD *)v76;
        *(_QWORD *)&v81 = *(_QWORD *)(v76 + 416);
        *(_QWORD *)(v76 + 416) = &v81;
        *((_QWORD *)&v81 + 1) = v50;
        HMLockObject(v50);
        xxxSetForegroundWindow2((__int64)v50, v60, 0x20u);
        ThreadUnlock1(v62, v61, v63);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u);
      }
      ThreadUnlock1(v58, v57, v59);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 176LL); i != (_QWORD *)(grpdeskRitInput + 176LL); i = (_QWORD *)*i )
      {
        v67 = *(i - 39);
        v68 = *(_DWORD *)(v67 + 396);
        if ( (v68 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *(_DWORD *)(v67 + 396) = v68 | 0x101;
          *(__m128i *)(v67 + 204) = si128;
          *(__m128i *)(v67 + 220) = si128;
          PostUpdateKeyStateEvent(v67);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0, v64, v65);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v70 = *(_DWORD *)(a2 + 48);
      if ( (v70 & 0x20) != 0 )
      {
        v71 = *(_QWORD *)(a2 + 8);
        if ( v71 )
        {
          if ( *(_QWORD *)(v71 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v70 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v85);
  PopAndFreeW32ThreadLock((__int64)&v87);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v73 = 27;
    LOBYTE(v73) = v8;
    LOBYTE(v72) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v73,
      v72,
      (_DWORD)gFullLog,
      4,
      3,
      27,
      (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      v36);
  }
  return (unsigned int)v36;
}
