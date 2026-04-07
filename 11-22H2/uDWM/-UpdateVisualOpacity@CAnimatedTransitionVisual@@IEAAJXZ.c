/*
 * XREFs of ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A815C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18001C3E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180052860 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateVisualOpacity(CAnimatedTransitionVisual *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 186);
  if ( v1 != *((float *)this + 187) )
  {
    CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v1);
    CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
  }
  return 0LL;
}
