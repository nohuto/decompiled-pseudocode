/*
 * XREFs of _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800E9C70
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E97F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18003AEFC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 */

__int64 __fastcall lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v5; // al

  v2 = 0;
  if ( *(_QWORD *)(a2 + 440) )
  {
    if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) && (*(_DWORD *)(a2 + 116) & 0x20000000) == 0 )
    {
      v5 = *(_BYTE *)(a2 + 664);
      if ( (v5 & 4) == 0
        && (v5 & 1) != 0
        && (*(_BYTE *)(a2 + 670) & 8) == 0
        && (**(_DWORD **)a1 == -1
         || !CAnimationScheduler::IsWindowCurrentlyAnimating(
               *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
               *(HWND *)(a2 + 40),
               **(_DWORD **)a1,
               0)) )
      {
        return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                               *(CTransitionVisualController **)(a1 + 8),
                               *(struct CTopLevelWindow **)(a2 + 440),
                               **(struct CVisual ***)(a1 + 16),
                               0,
                               0LL,
                               0,
                               1,
                               *(bool **)(a1 + 24));
      }
    }
  }
  return v2;
}
