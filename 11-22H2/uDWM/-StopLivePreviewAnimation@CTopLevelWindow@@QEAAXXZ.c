/*
 * XREFs of ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6D58
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18003211C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18006D9F0 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DBC6 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C7AD4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C7B80 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E6C2C (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x1800E61D0 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopLivePreviewAnimation(CTopLevelWindow *this)
{
  struct CVisual *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al

  if ( *((_DWORD *)this + 63) )
  {
    *((_DWORD *)this + 63) = 0;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
    v3 = *((_QWORD *)this + 90);
    if ( v3 )
    {
      v4 = (*(_DWORD *)(v3 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 90) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
  }
}
