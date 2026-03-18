/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44
 * Callers:
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C0012F3C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     NtUserSendEventMessage @ 0x1C0015100 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0015B24 (xxxSwitchToThisWindow.c)
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0041F3C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0060630 (EditionHandleAndPostKeyEvent.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00A3214 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00A4030 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C00AE7AC (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C00B3960 (NtUserBroadcastThemeChangeEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C00B5680 (EditionPostUpdateKeyStateEvent.c)
 *     EditionPostInputEvent @ 0x1C00B88F0 (EditionPostInputEvent.c)
 *     NtUserRegisterBSDRWindow @ 0x1C00BB7C0 (NtUserRegisterBSDRWindow.c)
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C00C08C0 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00E7CDC (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     QueueShutdownData @ 0x1C01B3328 (QueueShutdownData.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B56B0 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     EditionPostThreadInputEvent @ 0x1C01B6850 (EditionPostThreadInputEvent.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01BF9E0 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostAccessibilitySettingChangedEvent @ 0x1C01F6110 (EditionPostAccessibilitySettingChangedEvent.c)
 *     EditionPostRitSound @ 0x1C01F61A0 (EditionPostRitSound.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C021D598 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C021FB04 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0224BB0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ProcessSuspendedEventMessage @ 0x1C004F2B4 (ProcessSuspendedEventMessage.c)
 *     vDLOrderDispositionCompare @ 0x1C008F8E0 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00902B0 (vOLOrderCompare.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C011D3D8 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011E31C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C013100C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01B4F14 (--1-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        struct tagQ *a2,
        unsigned int a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned __int64 a6,
        __int64 a7,
        struct tagINPUT_MESSAGE_SOURCE *a8)
{
  char *v8; // rdi
  unsigned int DLT; // eax
  unsigned int v14; // eax
  struct tagQ *v15; // rax
  unsigned int i; // edi
  unsigned int j; // edi
  __int64 v18; // rdx
  unsigned int v19; // r14d
  char *v20; // rdi
  tagDomLock *v21; // rcx
  unsigned int v22; // r14d
  tagObjLock **p_Base; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ebx
  tagObjLock **v33; // rdi
  int v34; // edi
  char *v35; // rbx
  tagDomLock *v36; // rcx
  __int64 DomainLockRef; // [rsp+90h] [rbp-59h] BYREF
  char v38; // [rsp+98h] [rbp-51h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-49h]
  char v40; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-39h]
  char v42; // [rsp+B8h] [rbp-31h]
  __int128 Base; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-19h]
  char v45; // [rsp+D8h] [rbp-11h]

  v8 = (char *)gObjDummyLock;
  if ( a1 )
    v8 = (char *)a1 + 392;
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v38 = 0;
  v14 = DLT_QUEUE::getDLT();
  v40 = 0;
  v39 = GetDomainLockRef(v14);
  v41 = gDomainDummyLock;
  v42 = 0;
  Base = 0LL;
  v44 = 0LL;
  v45 = 0;
  v15 = a2;
  if ( v8 == (char *)gObjDummyLock )
    v8 = 0LL;
  if ( a2 == (struct tagQ *)gObjDummyLock )
    v15 = 0LL;
  *((_QWORD *)&Base + 1) = v8;
  *(_QWORD *)&Base = v15;
  qsort(&Base, 2uLL, 8uLL, vOLOrderCompare);
  for ( i = 1; i < 2; ++i )
  {
    if ( !vOLOrderCompare((char *)&Base + 8 * (int)i, (char *)&Base + 8 * (int)(i - 1)) )
      ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(i - 1));
  }
  qsort(&DomainLockRef, 2uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( j = 1; j < 2; ++j )
  {
    if ( !vDLOrderDispositionCompare(&DomainLockRef + 2 * (int)j, &DomainLockRef + 2 * (int)(j - 1)) )
      ClearCObjLock<tagObjLock *>(&DomainLockRef + 2 * (int)(j - 1));
  }
  if ( !v45 )
  {
    v19 = 0;
    v20 = &v38;
    do
    {
      v21 = (tagDomLock *)*((_QWORD *)v20 - 1);
      if ( v21 )
      {
        if ( *v20 )
          tagDomLock::LockExclusive(v21);
        else
          tagDomLock::LockShared(v21);
      }
      ++v19;
      v20 += 16;
    }
    while ( v19 < 2 );
    v22 = 0;
    p_Base = (tagObjLock **)&Base;
    do
    {
      if ( *p_Base )
        tagObjLock::LockExclusive(*p_Base);
      ++v22;
      ++p_Base;
    }
    while ( v22 < 2 );
    v45 = 1;
  }
  if ( a1
    && ((*((_DWORD *)a1 + 122) & 1) != 0
     || (vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 318) & 0x20) != 0)
     && !(unsigned int)ProcessSuspendedEventMessage((__int64)a1, a3, (HWND *)a4, a5, a6, a7))
    || (v24 = AllocQEntryEx((char *)a2 + 24, 0LL, 1LL), v18 = 0LL, (v25 = v24) == 0) )
  {
    DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
      &DomainLockRef,
      v18);
    return 0LL;
  }
  else
  {
    if ( a4 )
    {
      v27 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
    }
    else
    {
      v28 = *((_QWORD *)a2 + 16);
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 16);
      else
        v29 = *((_QWORD *)a2 + 13);
      v27 = *(_DWORD *)(*(_QWORD *)(v29 + 424) + 280LL);
    }
    StoreQMessage((struct tagQMSG *)v25, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v27, 0LL, 0LL);
    *(_QWORD *)(v25 + 104) = a1;
    if ( a3 == 20 )
    {
      v31 = SGDGetUserSessionState(v30);
      CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v31 + 3424), a7, 3LL, v25);
    }
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 122) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), 0x2040u);
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 4LL), 0x2040u);
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 56) + 16LL) & 0x2040) != 0 )
          KeSetEvent(*((PRKEVENT *)a1 + 92), 2, 0);
      }
    }
    else
    {
      SetWakeBit(*((_QWORD *)a2 + 12), 8256LL);
      SetWakeBit(*((_QWORD *)a2 + 13), 8256LL);
    }
    if ( v45 )
    {
      v32 = 1;
      v33 = (tagObjLock **)&Base + 1;
      do
      {
        if ( *v33 )
          tagObjLock::UnLockExclusive(*v33);
        --v33;
        --v32;
      }
      while ( v32 >= 0 );
      v34 = 1;
      v35 = &v40;
      do
      {
        v36 = (tagDomLock *)*((_QWORD *)v35 - 1);
        if ( v36 )
        {
          if ( *v35 )
            tagDomLock::UnLockExclusive(v36);
          else
            tagDomLock::UnLockShared(v36);
        }
        v35 -= 16;
        --v34;
      }
      while ( v34 >= 0 );
    }
    return 1LL;
  }
}
