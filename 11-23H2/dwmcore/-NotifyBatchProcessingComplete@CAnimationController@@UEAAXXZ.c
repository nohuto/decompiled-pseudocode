/*
 * XREFs of ?NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ @ 0x1800CBAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800CBBD4 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 */

void __fastcall CAnimationController::NotifyBatchProcessingComplete(CAnimationController *this)
{
  if ( (*((_BYTE *)this + 8) & 3) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations((CAnimationController *)((char *)this - 112));
    *((_BYTE *)this + 8) &= 0xFCu;
  }
}
