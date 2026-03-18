/*
 * XREFs of xxxDwmStopRedirection @ 0x1C0098410
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01F2FD0 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C0098654 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00986F4 (DwmNotifyChildrenAddRemove.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C011FFD8 (GreDwmShutdown.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0275600 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 j; // rbx
  struct tagWND *v7; // rsi
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    if ( gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(0LL);
      gbScreenCaptureSoftwareCursorEnabled = 0;
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 64LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
          v3 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      UserSessionSwitchLeaveCrit(v5);
      GreDxDwmShutdown();
      EnterCrit(1LL, 0LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v7 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v7 )
          {
            v13[2] = 0LL;
            v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v13;
            v13[1] = v7;
            HMLockObject(v7);
            v8 = 0;
            if ( g_pDwmState )
              v8 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow(v7, 0LL, 0LL, v8 != 0 ? 645 : 66181);
            ThreadUnlock1(v10, v9, v11);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
