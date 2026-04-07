/*
 * XREFs of ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18003AE98
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180038038 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18003AEFC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

char __fastcall CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(CTopLevelWindow3D *this)
{
  CAnimationScheduler *v1; // rdi
  HWND v2; // rdx
  char v3; // bl

  v1 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v3 = 0;
  if ( CAnimationScheduler::IsWindowCurrentlyAnimating(v1, *(HWND *)(*((_QWORD *)this + 42) + 40LL), 50, 0)
    || CAnimationScheduler::IsWindowCurrentlyAnimating(v1, v2, 67, 0) )
  {
    return 1;
  }
  return v3;
}
