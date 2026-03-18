/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802A7F44
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802AC850 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1802A7E5C (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A80F0 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802ACAC4 (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD2u, 0LL);
    goto LABEL_6;
  }
  if ( !CHolographicClient::OnExclusiveViewActivate(a2, this) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147467259, 0xD5u, 0LL);
LABEL_6:
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
  return *((_BYTE *)this + 80);
}
