/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x1800A5334 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800D1750 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x1800E9AE0 (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180003C20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001F2E4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x1800E9AE0 (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800EEDEC (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r14d
  struct CTopLevelWindow *v9; // rbx
  char v10; // bp
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int Clone; // eax
  char v15; // r8
  __int64 v16; // rcx
  CVisual *v17; // rcx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 55);
    if ( v6 )
      *(_BYTE *)(v6 + 248) &= ~0x80u;
    v18 = &CDesktopManager::s_csDwmInstance;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a2 + 168);
      *((_DWORD *)a2 + 168) = v8 & 0xFFEFFFFF;
      v9 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v9 && (*((_BYTE *)v9 + 249) & 1) != 0 )
      {
        v10 = 1;
        v11 = 0LL;
        v12 = *((_DWORD *)this + 34);
        if ( v12 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v11);
            if ( *(_QWORD *)(v13 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v13 + 128) + 24LL) == 3 )
              break;
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v12 )
              goto LABEL_13;
          }
          v10 = 0;
        }
LABEL_13:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v15 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v15 = v10;
        if ( v15 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v9, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p_EtwEventWriteTransfer(v16, (int)&UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52), a2, 0);
      CWindowList::UpdateWindowScale(*((struct CWindowData ***)CDesktopManager::s_pDesktopManagerInstance + 52), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v17 = (CVisual *)*((_QWORD *)a2 + 55);
      if ( v17 )
        CVisual::SetDirtyFlags(v17, 0x4000000);
      *((_DWORD *)a2 + 168) = v8;
    }
    if ( a3 )
    {
      v18 = (struct _RTL_CRITICAL_SECTION *)this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(
        (__int64)a2,
        (CTransitionVisualController **)&v18,
        1);
    }
  }
}
