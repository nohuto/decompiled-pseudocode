/*
 * XREFs of ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180011CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::NeedToUpdateScene(CAnimatedTransitionVisual *this)
{
  return (*((_DWORD *)this + 24) & 0x1000) != 0;
}
