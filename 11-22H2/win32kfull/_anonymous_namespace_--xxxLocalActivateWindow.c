/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AE408 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0066AC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0066AF4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C0066B58 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0066EE8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     IsVisible @ 0x1C00C719C (IsVisible.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  char v4; // r14
  int v6; // r15d
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r12
  int v12; // edx
  __int64 v13; // rax
  tagQ *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagWND *v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  struct tagWND *v28; // rdx
  const struct tagWND *v29; // rdx
  __int64 v30; // rcx
  GroupedProcessForegroundBoost *v31; // rcx
  __int64 v32; // rdx
  __int64 *v33; // r12
  int v34; // r15d
  struct tagWND *i; // r9
  int v36; // ebx
  char v37; // r13
  __int64 v38; // rbx
  struct tagWND *j; // rdx
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 NonChildAncestor; // rax
  struct tagWND *v48; // r9
  struct tagWND *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  struct tagWND *v55; // rdx
  bool v56; // bl
  bool v57; // zf
  const char *v58; // rax
  PDEVICE_OBJECT v59; // rcx
  __int16 v60; // ax
  __int64 v61[2]; // [rsp+50h] [rbp-89h] BYREF
  int v62; // [rsp+60h] [rbp-79h]
  __int128 v63; // [rsp+68h] [rbp-71h] BYREF
  __int64 v64; // [rsp+78h] [rbp-61h]
  __int128 v65; // [rsp+80h] [rbp-59h] BYREF
  __int64 v66; // [rsp+90h] [rbp-49h]
  __int128 v67; // [rsp+98h] [rbp-41h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-31h]
  _QWORD v69[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-1h]
  char v72[80]; // [rsp+E0h] [rbp+7h] BYREF
  int v73; // [rsp+140h] [rbp+67h]
  int v74; // [rsp+148h] [rbp+6Fh]
  int v75; // [rsp+150h] [rbp+77h]
  unsigned __int8 v76; // [rsp+158h] [rbp+7Fh]

  v74 = a2;
  v3 = *(_QWORD *)a1;
  v71 = 0LL;
  v66 = 0LL;
  v64 = 0LL;
  v4 = 1;
  v70 = 0LL;
  v62 = a3 & 0x80;
  v6 = a3 & 2;
  v73 = a3 & 4;
  v65 = 0LL;
  v75 = v6;
  v63 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1, a2) )
    return 0;
  v9 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v9 + 19) < 0 )
    return 0;
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v10 )
    return 0;
  v11 = *(struct tagWND **)(v10 + 128);
  v12 = 16;
  if ( a1 == v11 )
  {
    if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
    {
      v59 = WPP_GLOBAL_Control;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v60 = 15;
        goto LABEL_104;
      }
LABEL_113:
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
      if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 846LL);
        xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v3, 0LL, 1);
      }
      goto LABEL_85;
    }
LABEL_96:
    v59 = WPP_GLOBAL_Control;
    LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v60 = 14;
LABEL_104:
      WPP_RECORDER_AND_TRACE_SF_q(
        v59->AttachedDevice,
        v12,
        v7,
        v8,
        4,
        v8,
        v60,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        v3);
      goto LABEL_113;
    }
    goto LABEL_113;
  }
  if ( (*(_BYTE *)(v9 + 18) & 0x10) != 0 )
    goto LABEL_96;
  v61[0] = (unsigned __int8)v7;
  v76 = v7;
  v13 = *(_QWORD *)(gptiCurrent + 464LL);
  v61[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v13 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v61, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
  v14 = *(tagQ **)(gptiCurrent + 432LL);
  v15 = *((_QWORD *)v14 + 16);
  if ( v15 && *(char *)(*(_QWORD *)(v15 + 40) + 19LL) < 0 )
  {
    tagQ::SetActiveWindow(v14, 0LL);
  }
  else
  {
    v61[1] = *((_QWORD *)v14 + 16);
    v61[0] = (__int64)v14 + 136;
    HMAssignmentLock(v61, 0LL);
  }
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v17 = *(struct tagWND **)(v16 + 128);
  if ( v17 )
  {
    if ( v16 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadLockAlways(v17, &v70);
    v18 = (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v17) )
    {
      ThreadUnlock1(v20, v19, v21);
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v63, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v17, 6LL, v18, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v24 = v63;
    *(_QWORD *)(ThreadWin32Thread + 16) = v63;
    ThreadUnlock1(v24, v25, v26);
    v6 = v75;
  }
  v27 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = *(struct tagWND **)(v27 + 128);
  if ( *(struct tagWND **)(v27 + 136) != v28
    || v11 != v28
    || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v27 )
  {
    return 0;
  }
  if ( !v28 )
    *(_DWORD *)(v27 + 396) &= ~0x800u;
  tagQ::SetActiveWindow(*(tagQ **)(gptiCurrent + 432LL), a1);
  v30 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v30 == gpqForeground )
  {
    v31 = *(GroupedProcessForegroundBoost **)(v30 + 136);
    if ( v31 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v31, v29);
    GroupedProcessForegroundBoost::ApplyBoost(a1, v29);
  }
  SetOrClrWF(1LL, a1, 528LL, 1LL);
  PushW32ThreadLock(v3, &v63, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
  xxxWindowEvent(3u, 1);
  anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL);
  v33 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
  *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v65;
  *((_QWORD *)&v65 + 1) = v33;
  if ( v33 )
    HMLockObject(v33);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
    xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, v3, 0LL, 1);
  if ( v6 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v34 = 0;
  }
  else
  {
    v34 = 0;
    for ( i = *(struct tagWND **)(GetDesktopWindow(a1, v32) + 112);
          i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      ;
    }
    if ( (a1 != i || v33 && !(unsigned int)IsVisible(v33))
      && (!v73 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
    {
      v36 = 19;
      if ( a1 != i )
        v36 = 3;
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v36);
      if ( (v36 & 0x10) == 0 )
        TraceLoggingProcessUsageDataAggregationHelper(a1);
    }
  }
  v37 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x200) != 0 )
    goto LABEL_55;
  if ( !v33 )
    goto LABEL_54;
  if ( v33[2] != *((_QWORD *)a1 + 2) )
  {
    v38 = v33[2];
    v61[0] = v38;
    v67 = 0LL;
    v68 = 0LL;
    *(_DWORD *)(v38 + 488) |= 0x200u;
    v61[1] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    LockW32Thread(v38, &v67);
    xxxSendActivateAppMessage((const struct tagAAS *)v61);
    *(_DWORD *)(v38 + 488) &= ~0x200u;
    PopAndFreeW32ThreadLock((__int64)&v67);
    v34 = HIDWORD(v61[1]);
LABEL_54:
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x200u;
    v61[0] = *((_QWORD *)a1 + 2);
    v37 = 1;
    LODWORD(v61[1]) = v74;
    HIDWORD(v61[1]) = v34 & 0xFFFFFFFC | 1;
    xxxSendActivateAppMessage((const struct tagAAS *)v61);
  }
LABEL_55:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
    SetOrClrWF(1LL, a1, 257LL, 1LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
      ;
    *(_OWORD *)v61 = *(_OWORD *)LockPointer(v72, (char *)j + 200, a1);
    HMAssignmentLock(v61, 0LL);
  }
  v40 = 0LL;
  if ( v33 )
    v40 = *v33;
  anonymous_namespace_::xxxSendNCActivateMessage(a1);
  v41 = v76 + 1LL;
  v42 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v42 )
    v41 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v42 + 40) + 31LL) & 0x20) << 16;
  xxxSendMessage(a1, 6LL, v41, v40);
  xxxUpdateTray(a1);
  ThreadUnlock1(v44, v43, v45);
  SetOrClrWF(0LL, a1, 257LL, 1LL);
  if ( v62 )
  {
    v46 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( (*(_DWORD *)(v46 + 396) & 0x800) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v46 + 120));
      if ( v48 != (struct tagWND *)NonChildAncestor )
      {
        v49 = 0LL;
        if ( v48 && (*(_BYTE *)(*((_QWORD *)v48 + 5) + 31LL) & 0x20) == 0 )
          v49 = v48;
        v69[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v69;
        v69[2] = 0LL;
        v69[1] = v48;
        if ( v48 )
          HMLockObject(v48);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v49);
        ThreadUnlock1(v51, v50, v52);
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x40u;
  if ( gppiScreenSaver )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
      *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
      v53 = *(_QWORD *)(gppiScreenSaver + 328LL);
      if ( v53 )
        ForegroundBoost::SetForegroundPriority(v53, 1LL);
    }
  }
  else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
  {
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8LL);
  }
  if ( v37 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
  SetOrClrWF(0LL, a1, 528LL, 1LL);
  v54 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v54 + 16) = v63;
LABEL_85:
  v55 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  v56 = v55 == a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v57 = v55 == a1;
    v58 = "Activated";
    LOBYTE(v55) = v4;
    if ( !v57 )
      v58 = "Not Active";
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qs(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v55,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      16,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      *(_QWORD *)a1,
      (__int64)v58);
  }
  return v56;
}
