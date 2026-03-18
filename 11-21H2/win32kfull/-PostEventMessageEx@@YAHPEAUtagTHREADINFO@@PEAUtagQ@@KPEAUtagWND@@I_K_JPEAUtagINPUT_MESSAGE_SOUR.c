/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00038F4 (xxxSwitchToThisWindow.c)
 *     NtUserSendEventMessage @ 0x1C0003B50 (NtUserSendEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     _ScheduleDispatchNotification @ 0x1C00EB134 (_ScheduleDispatchNotification.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00FDA38 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0109B94 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0110420 (NtUserDisableThreadIme.c)
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C0111150 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     EditionPostInputEvent @ 0x1C0114E50 (EditionPostInputEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C0116DD0 (EditionPostUpdateKeyStateEvent.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0117050 (NtUserBroadcastThemeChangeEvent.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C011A14C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     NtUserRegisterBSDRWindow @ 0x1C011EE00 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     QueueShutdownData @ 0x1C01D9D08 (QueueShutdownData.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01DBF00 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     EditionPostThreadInputEvent @ 0x1C01DCB80 (EditionPostThreadInputEvent.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01E5124 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPostAccessibilitySettingChangedEvent @ 0x1C0211FE0 (EditionPostAccessibilitySettingChangedEvent.c)
 *     EditionPostRitSound @ 0x1C0212070 (EditionPostRitSound.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C02367D0 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00AC7DC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     ProcessSuspendedEventMessage @ 0x1C00ADE98 (ProcessSuspendedEventMessage.c)
 *     vDLOrderDispositionCompare @ 0x1C00E0C80 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00E0F80 (vOLOrderCompare.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C0123C4C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  unsigned int v18; // esi
  char *v19; // rdi
  tagDomLock *v20; // rcx
  unsigned int v21; // esi
  tagObjLock **p_Base; // rdi
  struct tagQMSG *v23; // rdi
  unsigned int v24; // ecx
  unsigned int v25; // esi
  int v26; // ebx
  tagObjLock **v27; // rdi
  int v28; // edi
  char *v29; // rbx
  tagDomLock *v30; // rcx
  __int64 DomainLockRef; // [rsp+90h] [rbp-59h] BYREF
  char v33; // [rsp+98h] [rbp-51h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-49h]
  char v35; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-39h]
  char v37; // [rsp+B8h] [rbp-31h]
  __int128 Base; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-19h]
  char v40; // [rsp+D8h] [rbp-11h]

  v8 = (char *)gObjDummyLock;
  if ( a1 )
    v8 = (char *)a1 + 392;
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v33 = 0;
  v14 = DLT_QUEUE::getDLT();
  v35 = 0;
  v34 = GetDomainLockRef(v14);
  v36 = gDomainDummyLock;
  v37 = 0;
  Base = 0LL;
  v39 = 0LL;
  v40 = 0;
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
  if ( !v40 )
  {
    v18 = 0;
    v19 = &v33;
    do
    {
      v20 = (tagDomLock *)*((_QWORD *)v19 - 1);
      if ( v20 )
      {
        if ( *v19 )
          tagDomLock::LockExclusive(v20);
        else
          tagDomLock::LockShared(v20);
      }
      ++v18;
      v19 += 16;
    }
    while ( v18 < 2 );
    v21 = 0;
    p_Base = (tagObjLock **)&Base;
    do
    {
      if ( *p_Base )
        tagObjLock::LockExclusive(*p_Base);
      ++v21;
      ++p_Base;
    }
    while ( v21 < 2 );
    v40 = 1;
  }
  if ( a1
    && ((*((_DWORD *)a1 + 122) & 1) != 0
     || (vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 314) & 0x20) != 0)
     && !(unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7))
    || (v23 = AllocQEntryEx((struct tagQ *)((char *)a2 + 24), 0LL, 0)) == 0LL )
  {
    v25 = 0;
  }
  else
  {
    if ( a4 )
      v24 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
    else
      v24 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a2) + 424) + 280LL);
    StoreQMessage(v23, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v24, 0LL, 0LL);
    *((_QWORD *)v23 + 13) = a1;
    if ( a3 == 20 )
      CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a7, 3LL, v23);
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
      SetWakeBit(*((_QWORD *)a2 + 11), 0x2040u);
      SetWakeBit(*((_QWORD *)a2 + 12), 0x2040u);
    }
    v25 = 1;
  }
  if ( v40 )
  {
    v26 = 1;
    v27 = (tagObjLock **)&Base + 1;
    do
    {
      if ( *v27 )
        tagObjLock::UnLockExclusive(*v27);
      --v27;
      --v26;
    }
    while ( v26 >= 0 );
    v28 = 1;
    v29 = &v35;
    do
    {
      v30 = (tagDomLock *)*((_QWORD *)v29 - 1);
      if ( v30 )
      {
        if ( *v29 )
          tagDomLock::UnLockExclusive(v30);
        else
          tagDomLock::UnLockShared(v30);
      }
      v29 -= 16;
      --v28;
    }
    while ( v28 >= 0 );
  }
  return v25;
}
