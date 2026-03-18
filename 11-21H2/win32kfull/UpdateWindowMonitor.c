/*
 * XREFs of UpdateWindowMonitor @ 0x1C006BAD0
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001F3A8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x1C006A534 (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C009AF58 (UpdateTopLevelWindowDPITransform.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0118D5C (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall UpdateWindowMonitor(ShellWindowManagement *this, _QWORD *a2)
{
  int v4; // r8d
  _DWORD *v5; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagSHADOW *Shadow; // rax
  __int64 v13; // rcx
  int v14; // ebx
  char v15; // [rsp+58h] [rbp+10h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  while ( a2 )
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 256LL) = *a2;
    v4 = *((_DWORD *)this + 80);
    if ( (v4 & 0x40000) == 0 && *(_WORD *)(a2[5] + 60LL) != *(_WORD *)(*((_QWORD *)this + 5) + 284LL) )
      *((_DWORD *)this + 80) = v4 | 0x40000;
    if ( (unsigned int)IsTopLevelWindow(this) && (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) == 2 )
      SetDeferredDpiStateForWindowAndChildren(this);
    *(_WORD *)(*((_QWORD *)this + 5) + 284LL) = *(_WORD *)(a2[5] + 60LL);
    v5 = (_DWORD *)*((_QWORD *)this + 36);
    if ( v5 )
    {
      --*v5;
      v6 = (_DWORD *)*((_QWORD *)this + 36);
      if ( !*v6 )
        Win32FreePool(v6);
      *((_QWORD *)this + 36) = 0LL;
    }
    v7 = (_DWORD *)a2[16];
    *((_QWORD *)this + 36) = v7;
    ++*v7;
    v8 = *((_QWORD *)this + 5);
    *(_DWORD *)(v8 + 232) = *(_DWORD *)(v8 + 232) & 0xFFFFFBFF | ((unsigned __int8)ShouldUseLogPixelsForWindowMetrics(this) << 10);
    v9 = (unsigned __int8)IsChildWindowDpiBoundary(this);
    v10 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v10 + 26) & 8) == 0 )
        ComposeWindow(this);
    }
    else if ( (*(_DWORD *)(v10 + 232) & 2) != 0 && IsChildWindowCoordinateSpaceBoundary(this) )
    {
      ComposeWindow(this);
      if ( GetTopLevelWindow(this) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
        xxxInternalInvalidate(*((struct tagWND **)this + 13), (HRGN)1, 0x485u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15);
      }
    }
    if ( !(unsigned int)IsTopLevelWindow(this) && !v9 )
    {
      v11 = *((_QWORD *)this + 27);
      if ( v11 )
      {
        Win32FreePool(v11);
        *((_QWORD *)this + 27) = 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 26LL) & 8) != 0 )
        UpdateWindowSpriteMonitor((__int64)this, a2);
      return;
    }
    if ( (*((_DWORD *)this + 80) & 0x40000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                          + 64LL) & 1) != 0 )
          {
            v13 = *((_QWORD *)this + 5);
            if ( (*(_DWORD *)(v13 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v13 + 27) & 0x20) != 0
              && (*(_BYTE *)(v13 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v14 = RecreateRedirectionBitmap(this, 0, 0LL);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              if ( v14 >= 0 )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
                xxxInternalInvalidate(this, (HRGN)1, 0x85u);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
              }
            }
          }
        }
      }
    }
    UpdateWindowSpriteMonitor((__int64)this, a2);
    UpdateTopLevelWindowDPITransform(this, a2);
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL) + 10LL) & 2) != 0 )
    {
      Shadow = FindShadow(this);
      if ( Shadow )
      {
        this = (ShellWindowManagement *)*((_QWORD *)Shadow + 1);
        if ( this )
          continue;
      }
    }
    return;
  }
}
