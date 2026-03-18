/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802A815C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802AC850 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AD6F8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AD970 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802ACB34 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 80) || *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 0;
  }
  else
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, this);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
