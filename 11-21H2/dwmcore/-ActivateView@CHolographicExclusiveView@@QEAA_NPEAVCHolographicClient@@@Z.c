/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180298D74
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x18029D930 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x180298C8C (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180298F20 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18029DBA4 (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 1;
    return *((_BYTE *)this + 80);
  }
  v4 = CHolographicExclusiveView::ActivateSwapChain(this, (__int64)a2);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0xD2u);
    goto LABEL_6;
  }
  if ( !CHolographicClient::OnExclusiveViewActivate(a2, this) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147467259, 0xD5u);
LABEL_6:
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
  return *((_BYTE *)this + 80);
}
