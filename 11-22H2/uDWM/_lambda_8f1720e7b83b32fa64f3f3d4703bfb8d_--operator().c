/*
 * XREFs of _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x1800D9AB8
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DCAE8 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()(
        CGroupingStoryboard **a1,
        CAnimatedTransitionVisual **a2)
{
  CGroupingStoryboard *v4; // rcx

  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], 0.0);
  v4 = *a1;
  *((_BYTE *)a2[5] + 971) = 1;
  *((_BYTE *)a2[5] + 984) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(v4, (struct CAnimationComponent *)a2);
}
