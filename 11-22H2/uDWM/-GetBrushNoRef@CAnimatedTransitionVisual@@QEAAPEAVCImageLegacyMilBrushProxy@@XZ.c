/*
 * XREFs of ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x1800A7204
 * Callers:
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7D48 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A90B8 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CImageLegacyMilBrushProxy *__fastcall CAnimatedTransitionVisual::GetBrushNoRef(CAnimatedTransitionVisual *this)
{
  struct CImageLegacyMilBrushProxy *result; // rax

  result = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 76);
  if ( !result )
    return (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 74);
  return result;
}
