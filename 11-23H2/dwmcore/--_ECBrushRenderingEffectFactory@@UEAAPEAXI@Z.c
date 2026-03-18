/*
 * XREFs of ??_ECBrushRenderingEffectFactory@@UEAAPEAXI@Z @ 0x1802B96D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingEffectFactory *__fastcall CBrushRenderingEffectFactory::`vector deleting destructor'(
        CBrushRenderingEffectFactory *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
