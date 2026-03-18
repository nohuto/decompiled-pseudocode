/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00A9974 (IsAdaptiveQueueDetachExempted.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     GetProcessDpiServerInfo @ 0x1C00BA408 (GetProcessDpiServerInfo.c)
 *     bSetDevDragWidth @ 0x1C00C8184 (bSetDevDragWidth.c)
 *     xxxTranslateMessage @ 0x1C010081C (xxxTranslateMessage.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     SlowAppThreadInShellFrame @ 0x1C0116CD4 (SlowAppThreadInShellFrame.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590 (-zzzShowCursor@@YAH_N@Z.c)
 *     xxxCallMsgFilter @ 0x1C013EB60 (xxxCallMsgFilter.c)
 *     ?Feature_Wmasfot__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015AE04 (-Feature_Wmasfot__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01DD5A8 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C02094E8 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C0209B58 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209BA0 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C020AD78 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C020C448 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020F498 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C02362C8 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x1C023CB00 (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x1C024A8C0 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x1C024A98C (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C027286C (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMoveSize(struct tagWND *a1, unsigned int a2, int a3)
{
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct MOVESIZEDATA *MoveSizeData; // rax
  struct MOVESIZEDATA *v13; // rsi
  unsigned int *v14; // r14
  unsigned int v15; // r12d
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rdx
  struct tagWND *v19; // rdx
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  WindowArrangement *v23; // rcx
  bool v24; // al
  bool v25; // dl
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  tagQ *v30; // rcx
  bool v31; // al
  struct tagTHREADINFO *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // r10d
  unsigned int v35; // eax
  struct tagWND *v36; // rdx
  int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // eax
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rcx
  __int64 ProcessDpiServerInfo; // rax
  _QWORD *v44; // [rsp+50h] [rbp-29h]
  __int128 v45; // [rsp+58h] [rbp-21h] BYREF
  __int64 v46; // [rsp+68h] [rbp-11h]
  unsigned int v47[4]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v48[2]; // [rsp+80h] [rbp+7h]
  __int128 v49; // [rsp+90h] [rbp+17h]
  int v50; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v51; // [rsp+E8h] [rbp+6Fh]
  struct MOVESIZEDATA *v52; // [rsp+F8h] [rbp+7Fh] BYREF

  v51 = a2;
  *(_OWORD *)v47 = 0LL;
  v5 = 0;
  v46 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  *(_OWORD *)v48 = 0LL;
  v50 = 0;
  v49 = 0LL;
  v45 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v6 + 432) != v7 || *(_QWORD *)(gptiCurrent + 672LL) )
    return;
  v8 = *(_QWORD *)(v7 + 112);
  if ( v8 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2
      || (v8 = *(_QWORD *)(v8 + 104)) != 0 && (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2 )
    {
      *(_QWORD *)&v45 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v45;
      *((_QWORD *)&v45 + 1) = v8;
      HMLockObject(v8);
      xxxSendMessage(v8);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(a1);
  v52 = MoveSizeData;
  v13 = MoveSizeData;
  if ( !MoveSizeData )
    return;
  v14 = (unsigned int *)((char *)MoveSizeData + 200);
  *((_DWORD *)MoveSizeData + 50) &= 0xFFFC7FFF;
  v44 = (_QWORD *)((char *)MoveSizeData + 272);
  *((_QWORD *)MoveSizeData + 34) = *(_QWORD *)(gptiCurrent + 776LL);
  AdjustProcessPriorityForDrag(MoveSizeData);
  xxxInitializeMoveSizeData(a1, v13, v51, a3);
  if ( (*v14 & 2) != 0 )
  {
    v15 = 1;
  }
  else
  {
    v16 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL);
    if ( (v16 & 0x800000) != 0 )
      v15 = 4;
    else
      v15 = (v16 & 0x1000000) != 0 ? 8 : 2;
  }
  if ( (*v14 & 0x20) != 0 )
    gdwPUDFlags |= 0x10000000u;
  else
    gdwPUDFlags &= ~0x10000000u;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
    bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
  v17 = *((_DWORD *)v13 + 44);
  v18 = 2LL;
  if ( v17 != 9 )
    v18 = 0LL;
  NotifyShell::DragSizeInfo(*((_QWORD *)v13 + 2), v18, v15);
  if ( v17 != 9 )
    xxxQueryShellForSizeCooperation(v13);
  if ( gpqForeground )
  {
    v19 = *(struct tagWND **)(gpqForeground + 112LL);
    if ( v19 )
    {
      if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
      {
        v20 = 33;
        if ( *((_QWORD *)v19 + 2) == gptiCurrent )
          v19 = a1;
        else
          v20 = 49;
        xxxWindowEvent(0x80000004, v19, 0, 2u, v20);
      }
    }
  }
  xxxWindowEvent(0xAu, a1, 0, 0, 0);
  xxxWindowEvent(0x19u, a1, 0, v51, 0);
  xxxDrawDragRect(v13, 0LL, 0);
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
  v48[1] = (*((unsigned __int16 *)v13 + 134) << 16) | *((unsigned __int16 *)v13 + 132);
  xxxSendMessage((ULONG_PTR)a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v21) = 0;
  }
  if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v22,
      (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      4,
      1,
      37,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      (char)a1);
  }
  xxxCapture(gptiCurrent, a1, 6);
  if ( (*v14 & 0x800) == 0 && (*v14 & 0x400) == 0 || (v24 = WindowArrangement::SnapFurtherFromEdge(v23), v25 = 1, v24) )
    v25 = 0;
  CCursorClip::EnableSpeedBump(gpCursorClip, v25);
  zzzShowCursor(1);
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    EnableDwmSwCursorMoveSize(&v50);
    *v14 ^= (*v14 ^ (v50 << 26)) & 0x4000000;
  }
  Feature_Wmasfot__private_IsEnabledPreCheck();
  if ( ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x4000000) )
  {
    v27 = (void *)ReferenceDwmApiPort(v26);
    DwmAsyncNotifyIsInMoveSizeChange(v27, v51);
  }
  if ( (*v14 & 8) != 0 )
    goto LABEL_84;
  while ( 2 )
  {
    if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
      goto LABEL_67;
    while ( !(unsigned int)xxxInternalGetMessage(v47, 0LL, 0, 0, 1, 0) )
    {
      if ( (*v14 & 8) != 0 )
        goto LABEL_66;
      if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) == 0 || IsAdaptiveQueueDetachExempted(gptiCurrent, v28, v29) )
      {
        if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
          goto LABEL_66;
      }
      else
      {
        v30 = *(tagQ **)(gptiCurrent + 432LL);
        v50 = 0;
        v31 = tagQ::AreMultipleThreadsAttached(v30);
        if ( !(unsigned int)xxxWaitMessageEx(0x3C07u, v31 ? 200 : 5000, (enum SLEEP_STATUS *)&v50) && !v50 )
          goto LABEL_66;
        if ( v50 )
        {
          if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL))
            && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
            && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
          {
            v32 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
            if ( v32 )
              TryDetachShellFrame(gptiCurrent, (__int64)v32, v50 == 2, 1);
          }
        }
      }
LABEL_65:
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
        goto LABEL_66;
    }
    if ( v47[2] - 512 > 0xE && v47[2] != 35 && v47[2] - 256 > 9 )
    {
      if ( !(unsigned int)xxxCallMsgFilter((__int64)v47, (unsigned int)(v51 != 9) + 3) )
      {
        xxxTranslateMessage((__int64)v47, 0);
        *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
        xxxDispatchMessage((__int64)v47);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
      }
      goto LABEL_65;
    }
    *v44 = *(_QWORD *)(gptiCurrent + 776LL);
    if ( v5 )
    {
LABEL_66:
      v13 = v52;
      goto LABEL_67;
    }
    v13 = v52;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x1800000) != 0 )
    {
      v5 = 2;
      *v14 ^= (*v14 ^ (*v14 + 0x8000)) & 0x38000;
    }
    else
    {
      v5 = 1;
    }
LABEL_67:
    EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(v13);
    if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
    {
      xxxMS_TrackMove((ULONG_PTR)a1, 256, 0x1BuLL, 1LL, v13);
      goto LABEL_84;
    }
    v33 = *v14;
    if ( (*v14 & 8) != 0 )
    {
      *v14 = v33 & 0xFFFFFFF7;
      goto LABEL_84;
    }
    v34 = v47[2];
    if ( v47[2] == 35 )
    {
      xxxCallHook(2, 0LL, 0LL, 5);
      v33 = *v14;
      v34 = v47[2];
    }
    if ( (v33 & 1) == 0 )
    {
LABEL_74:
      v35 = *v14;
      if ( (*v14 & 1) == 0 )
      {
        xxxMS_TrackMove(
          (ULONG_PTR)a1,
          v34,
          v48[0],
          (unsigned __int16)(WORD2(v49) + *((_WORD *)v13 + 84)) | ((unsigned __int16)(WORD4(v49) + *((_WORD *)v13 + 86)) << 16),
          v13);
        v35 = *v14;
      }
      if ( (v35 & 8) != 0 )
        goto LABEL_84;
      continue;
    }
    break;
  }
  if ( (unsigned int)xxxTrackInitSize((ULONG_PTR)a1, v34, v48[0], v48[1], v13) )
  {
    v34 = v47[2];
    goto LABEL_74;
  }
LABEL_84:
  CCursorClip::EnableSpeedBump(gpCursorClip, 0);
  if ( gpqForeground )
  {
    v36 = *(struct tagWND **)(gpqForeground + 112LL);
    if ( v36 )
    {
      if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        xxxWindowEvent(0x80000005, v36, 0, 2u, 33);
    }
  }
  xxxWindowEvent(0xBu, a1, 0, 0, 0);
  xxxSendMessage((ULONG_PTR)a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v37) = 0;
  }
  LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v37,
      v38,
      (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      4,
      1,
      38,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      (char)a1);
  ReportMoveSizeCompletionToShell((__int64)v13, v15, v38);
  v39 = *v14;
  if ( (*v14 & 0x4000000) != 0 )
  {
    ChangeComposableCursor(0LL);
    v39 = *v14;
  }
  *v14 = v39 & 0xFBFFFFFF;
  Feature_Wmasfot__private_IsEnabledPreCheck();
  if ( ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x4000000) )
  {
    v41 = (void *)ReferenceDwmApiPort(v40);
    DwmAsyncNotifyIsInMoveSizeChange(v41, v51);
  }
  *v14 &= ~0x100000u;
  AdjustProcessPriorityForDrag(v13);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
  {
    ProcessDpiServerInfo = GetProcessDpiServerInfo(v42);
    bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
  }
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  if ( (*v14 & 0x20) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      GreDeleteObject(ghrgnUpdateSave);
      ghrgnUpdateSave = 0LL;
      gnUpdateSave = 0;
    }
  }
  gdwPUDFlags &= ~0x10000000u;
  MOVESIZEDATA::FreeMoveSizeData(&v52);
  zzzShowCursor(0);
}
