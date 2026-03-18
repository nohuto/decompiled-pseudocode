/*
 * XREFs of UnlinkWindow @ 0x1C0072CAC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0062D18 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006FF80 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006FFAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     DwmAsyncChildUnlink @ 0x1C0072E58 (DwmAsyncChildUnlink.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00F9BAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C021C9CC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(struct tagWND *a1, __int64 a2)
{
  int v3; // esi
  __int64 v5; // rcx
  struct tagWND *v6; // rax
  int v7; // ebp
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  void *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a1 + 80) & 0x2000000;
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  if ( !v3 || !(unsigned int)IsWindowDesktopComposed(a1) || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    goto LABEL_20;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  if ( v5 )
    v6 = *(struct tagWND **)(v5 + 104);
  if ( a1 == v6 || a2 == gTermIO[1] )
  {
LABEL_20:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    DirtyVisRgnTrackers(a1);
  }
  if ( *(struct tagWND **)(a2 + 112) == a1 )
  {
    v9 = (_QWORD *)LockPointer(v14, a2 + 112, *((_QWORD *)a1 + 11));
  }
  else
  {
    v8 = *((_QWORD *)a1 + 12);
    if ( !v8 )
      goto LABEL_15;
    v9 = LockPointer(v14, v8 + 88, *((_QWORD *)a1 + 11));
  }
  v13 = *(_OWORD *)v9;
  HMAssignmentLock(&v13, 0LL);
LABEL_15:
  v10 = *((_QWORD *)a1 + 11);
  if ( v10 )
  {
    v13 = *(_OWORD *)LockPointer(v14, v10 + 96, *((_QWORD *)a1 + 12));
    HMAssignmentLock(&v13, 0LL);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) = 0LL;
  result = HMAssignmentUnlock((char *)a1 + 96);
  *((_DWORD *)a1 + 80) &= 0xFCFFFFFF;
  if ( v7 )
  {
    v12 = (void *)ReferenceDwmApiPort();
    return DwmAsyncChildUnlink(v12);
  }
  return result;
}
