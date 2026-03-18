/*
 * XREFs of xxxWindowEvent @ 0x1C0073AB0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C00739F0 (NtUserNotifyWinEvent.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     zzzInternalShowCaret @ 0x1C00C2D88 (zzzInternalShowCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00C32D8 (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 *     xxxCreateCaret @ 0x1C00C6204 (xxxCreateCaret.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0108B84 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzSetCaretPos @ 0x1C010A5AC (zzzSetCaretPos.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE340 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C022F774 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240A10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0240BC8 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     CategoryMaskFromEvent @ 0x1C0074128 (CategoryMaskFromEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00741F8 (xxxFlushDeferredWindowEvents.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0074278 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00742CC (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01189BC (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01E53CC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, int a5)
{
  unsigned int DLT; // eax
  char *v7; // rbx
  __int64 v8; // r13
  int v9; // edi
  tagDomLock *v10; // rcx
  unsigned int v11; // edi
  int v12; // r12d
  int v13; // r15d
  int v14; // r14d
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  int v18; // eax
  int v19; // ebx
  PETHREAD *v20; // rcx
  struct tagWND *v21; // rax
  __int64 v22; // rbx
  __int64 *v23; // rax
  struct tagWND *v24; // rbx
  unsigned int v25; // r12d
  struct tagTHREADINFO *v26; // r15
  __int64 v27; // rbx
  int v28; // ecx
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  HANDLE v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // r15d
  char *v38; // r14
  tagDomLock *v39; // rcx
  struct tagNOTIFY *Notify; // rax
  int v41; // ecx
  unsigned int v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+28h] [rbp-D8h]
  unsigned int v44; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h]
  struct tagTHREADINFO *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  void (*v52)(void); // [rsp+80h] [rbp-80h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  HANDLE ThreadId; // [rsp+98h] [rbp-68h]
  __int128 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  tagDomLock *DomainLockRef; // [rsp+B8h] [rbp-48h]
  char v59; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-38h]
  char v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  char v63; // [rsp+E0h] [rbp-20h]
  tagDomLock *v64; // [rsp+E8h] [rbp-18h] BYREF
  char v65; // [rsp+F0h] [rbp-10h] BYREF
  char v66; // [rsp+110h] [rbp+10h]

  v57 = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  v51 = 0LL;
  DLT = DLT_WINEVENT::getDLT();
  v59 = 1;
  v7 = &v59;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v60 = gDomainDummyLock;
  v8 = 0LL;
  v61 = 0;
  v9 = 0;
  v62 = 0LL;
  v63 = 0;
  do
  {
    v10 = (tagDomLock *)*((_QWORD *)v7 - 1);
    if ( v10 )
    {
      if ( *v7 )
        tagDomLock::LockExclusive(v10);
      else
        tagDomLock::LockShared(v10);
    }
    ++v9;
    v7 += 16;
  }
  while ( !v9 );
  v63 = 1;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_7;
  if ( a1 == 2147483408 )
  {
    v11 = 1;
    goto LABEL_8;
  }
  if ( a1 - 2147483409 > 1 )
  {
LABEL_7:
    v11 = 0;
    if ( a1 < 0x7FFFFF00 )
      goto LABEL_8;
  }
  else
  {
    v11 = 2;
  }
  if ( a1 > 0x80000003 )
  {
    if ( a1 <= 0x80000005 )
    {
      v12 = 4096;
      goto LABEL_87;
    }
LABEL_8:
    v12 = 0;
    v13 = 0;
    goto LABEL_9;
  }
  if ( a1 >= 0x80000002 )
  {
    v12 = 512;
LABEL_87:
    v13 = 1;
    goto LABEL_9;
  }
  if ( a1 <= 0x7FFFFF01 )
  {
    v12 = 1024;
    goto LABEL_87;
  }
  if ( a1 <= 0x7FFFFFFF )
    goto LABEL_8;
  v12 = 256;
  v13 = 1;
LABEL_9:
  v14 = CategoryMaskFromEvent(a1);
  if ( (v14 & *(_DWORD *)(gpsi + 1892LL)) == 0 && !v11 && !v13 )
    goto LABEL_47;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_46;
  v16 = 0LL;
  v50 = 0LL;
  v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v17 )
  {
    v16 = *v17;
    v50 = *v17;
  }
  if ( (a5 & 0x11) != 0x11 && a2 && *(char *)(*((_QWORD *)a2 + 5) + 19LL) < 0 )
    goto LABEL_46;
  v18 = *(_DWORD *)(v16 + 488);
  v19 = a5 | 2;
  if ( (v18 & 0x10000001) == 0 )
    v19 = a5;
  v44 = v19;
  if ( (v19 & 1) != 0 && a2 )
  {
    v20 = (PETHREAD *)*((_QWORD *)a2 + 2);
    v21 = 0LL;
    if ( (v19 & 0x10) == 0 )
      v21 = a2;
    a2 = v21;
  }
  else
  {
    v20 = (PETHREAD *)v50;
  }
  v49 = (struct tagTHREADINFO *)v20;
  ThreadId = PsGetThreadId(*v20);
  v54 = *((_QWORD *)v49 + 53);
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v49);
  if ( (v19 & 0x20) != 0 )
    LODWORD(v45) = _InterlockedIncrement(&gcWinEvents);
  else
    v45 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)&v56 = *(_QWORD *)(v50 + 416);
  *(_QWORD *)(v50 + 416) = &v56;
  *((_QWORD *)&v56 + 1) = a2;
  if ( a2 )
    HMLockObject(a2);
  v22 = 0LL;
  v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v23 )
    v22 = *v23;
  *(_QWORD *)&v51 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = &v51;
  *((_QWORD *)&v51 + 1) = v49;
  v52 = (void (*)(void))DereferenceW32Thread;
  ObfReferenceObject(*(PVOID *)v49);
  _InterlockedIncrement((volatile signed __int32 *)v49 + 2);
  if ( (v44 & 2) == 0 )
    xxxFlushDeferredWindowEvents();
  if ( v13 && (*(_DWORD *)(*((_QWORD *)v49 + 53) + 820LL) & 0x1000000) != 0 )
  {
    v24 = a2;
    v43 = v12;
    v25 = v44;
    xxxDoLocalTSFWork(a1, a2, a3, a4, v44, v43, v49, v45);
  }
  else
  {
    v24 = a2;
    v25 = v44;
  }
  v26 = v49;
  if ( v11 )
    DoGlobalTSFWork(a1, v24, a3, a4, v42, v11, v49, v45);
  if ( (v14 & *(_DWORD *)(gpsi + 1892LL)) == 0 )
  {
    PopAndFreeW32ThreadLock((__int64)&v51);
    goto LABEL_45;
  }
  v27 = gpWinEventHooks;
  if ( !gpWinEventHooks )
    goto LABEL_41;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v27 + 40);
    v29 = *(_QWORD *)(v27 + 24);
    if ( (v28 & 1) != 0 )
      goto LABEL_40;
    if ( *(_DWORD *)(v27 + 32) > a1 )
      goto LABEL_40;
    if ( a1 > *(_DWORD *)(v27 + 36) )
      goto LABEL_40;
    v34 = *(HANDLE *)(v27 + 48);
    if ( v34 )
    {
      if ( v34 != ThreadProcessId )
        goto LABEL_40;
    }
    if ( (v28 & 4) != 0 && v54 == *(_QWORD *)(*(_QWORD *)(v27 + 16) + 424LL) )
      goto LABEL_40;
    v35 = *(_DWORD *)(v27 + 56);
    if ( v35 )
    {
      if ( v35 != (_DWORD)ThreadId )
        goto LABEL_40;
    }
    if ( (v28 & 2) != 0 && v26 == *(struct tagTHREADINFO **)(v27 + 16) )
      goto LABEL_40;
    v36 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 456LL);
    if ( v36 != *(_QWORD *)(v50 + 456) && a1 != 32 && (v36 != *((_QWORD *)v26 + 57) || a1 + 2147483646 > 1) )
      goto LABEL_40;
    DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v64);
    if ( !v66 )
    {
      v37 = 0;
      v38 = &v65;
      do
      {
        v39 = (tagDomLock *)*((_QWORD *)v38 - 1);
        if ( v39 )
        {
          if ( *v38 )
            tagDomLock::LockExclusive(v39);
          else
            tagDomLock::LockShared(v39);
        }
        ++v37;
        v38 += 16;
      }
      while ( !v37 );
      v66 = 1;
    }
    if ( (*(_BYTE *)(_HMPheFromObject(v27) + 25) & 1) != 0 )
      break;
    if ( v66 && v64 )
    {
      if ( v65 )
        tagDomLock::UnLockExclusive(v64);
      else
        tagDomLock::UnLockShared(v64);
    }
    v26 = v49;
    Notify = CreateNotify((struct tagEVENTHOOK *)v27, a1, a2, a3, a4, v49, v45, 0);
    if ( !Notify )
      goto LABEL_41;
    v41 = v25 | *((_DWORD *)Notify + 14);
    *((_DWORD *)Notify + 14) = v41;
    if ( (v41 & 4) != 0 )
    {
      v41 &= ~2u;
      *((_DWORD *)Notify + 14) = v41;
    }
    if ( (v41 & 2) == 0 )
      v29 = xxxProcessNotifyWinEvent((__int64)Notify);
LABEL_40:
    v27 = v29;
    if ( !v29 )
      goto LABEL_41;
  }
  if ( v66 && v64 )
  {
    if ( v65 )
      tagDomLock::UnLockExclusive(v64);
    else
      tagDomLock::UnLockShared(v64);
  }
LABEL_41:
  v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v30 )
    v8 = *v30;
  *(_QWORD *)(v8 + 16) = v51;
  v33 = *((_QWORD *)&v51 + 1);
  if ( *((_QWORD *)&v51 + 1) )
    v52();
LABEL_45:
  ThreadUnlock1(v33, v31, v32);
LABEL_46:
  if ( v63 )
  {
LABEL_47:
    if ( DomainLockRef )
    {
      if ( v59 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
}
