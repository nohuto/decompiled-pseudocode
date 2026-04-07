/*
 * XREFs of ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1800150D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180015178 (-OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetSystemBackdropType(CWindowList *a1, struct IDwmWindow *a2, int a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rax
  CTopLevelWindow *v9; // rcx
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v13; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(a1, a2, 1, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData,
      v11[0]);
  }
  else
  {
    v8 = v13;
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 51) != a3 )
      {
        *((_DWORD *)v13 + 51) = a3;
        v9 = (CTopLevelWindow *)*((_QWORD *)v8 + 55);
        if ( v9 )
          CTopLevelWindow::OnSystemBackdropUpdated(v9);
      }
    }
    v7 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v11);
  return v7;
}
