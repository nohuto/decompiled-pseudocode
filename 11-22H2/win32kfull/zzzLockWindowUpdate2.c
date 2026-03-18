/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C005DC44
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C00137D0 (NtUserLockWindowUpdate.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     SpbCheckPwnd @ 0x1C001390C (SpbCheckPwnd.c)
 *     SpbCheck @ 0x1C0015968 (SpbCheck.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  struct tagWND *v4; // rdi
  __int64 v5; // rbp
  char *i; // rbx
  __int64 v7; // rdx
  struct tagWND *StyleWindow; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  BOOL v13; // esi
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v12 = 1440LL;
    goto LABEL_20;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v12 = 87LL;
LABEL_20:
    UserSetLastError(v12);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2, 0LL);
    v14[1] = a1;
    v14[0] = &gspwndLockUpdate;
    HMAssignmentLock(v14, 0LL);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v4 = (struct tagWND *)gspwndLockUpdate;
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    if ( v4 )
      HMLockObject(v4);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v4, 1, 0LL);
    v5 = 1LL;
    for ( i = *(char **)(gpDispInfo + 32LL); ; i = *(char **)i )
    {
      if ( !i )
        goto LABEL_15;
      if ( (*((_DWORD *)i + 12) & 2) != 0 )
        break;
    }
    if ( *((_QWORD *)i + 5) )
    {
      v5 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 24);
      v13 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *((_QWORD *)i + 5), 4LL) != 1;
    }
    else
    {
      v13 = 0;
    }
    FreeSpb(i);
    if ( v13 )
    {
LABEL_15:
      StyleWindow = (struct tagWND *)GetStyleWindow(v4, 2568LL);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow(v4, v7);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v5, 0x10485u);
      zzzEndDeferWinEventNotify();
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
    }
    SpbCheckPwnd(v4);
    ThreadUnlock1(v10, v9, v11);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
