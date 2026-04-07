/*
 * XREFs of ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180012040
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Opacity(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  float v2; // xmm0_4

  v2 = *((float *)a2 + 5);
  if ( v2 != *((float *)this + 186) )
  {
    *((float *)this + 186) = v2;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}
