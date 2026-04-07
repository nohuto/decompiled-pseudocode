/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180004E2C
 * Callers:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180004C84 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180004DC8 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000C494 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800DB344 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800EA43C (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180003624 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(CAnimationScheduler *this, HWND a2, int a3, int a4)
{
  unsigned int v4; // esi
  char HasAnimationComponent; // r10
  __int64 v6; // rbx
  __int64 v10; // r14
  CStoryboard *v11; // rcx

  v4 = *((_DWORD *)this + 10);
  HasAnimationComponent = 0;
  v6 = 0LL;
  if ( v4 )
  {
    v10 = *((_QWORD *)this + 2);
    do
    {
      v11 = *(CStoryboard **)(v10 + 8 * v6);
      if ( *((_DWORD *)v11 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v11 + 18)) )
      {
        if ( !a2 )
          return 1;
        HasAnimationComponent = CStoryboard::HasAnimationComponent(v11, a2, a4);
        if ( HasAnimationComponent )
          return HasAnimationComponent;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return HasAnimationComponent;
}
