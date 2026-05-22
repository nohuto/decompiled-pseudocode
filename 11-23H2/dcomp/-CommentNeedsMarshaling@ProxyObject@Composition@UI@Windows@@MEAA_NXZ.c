/*
 * XREFs of ?CommentNeedsMarshaling@ProxyObject@Composition@UI@Windows@@MEAA_NXZ @ 0x18008ADC0
 * Callers:
 *     ?CommentNeedsMarshaling@CompositionPropertyAnimator@Composition@UI@Windows@@MEAA_NXZ @ 0x180088FE0 (-CommentNeedsMarshaling@CompositionPropertyAnimator@Composition@UI@Windows@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::UI::Composition::ProxyObject::CommentNeedsMarshaling(
        Windows::UI::Composition::ProxyObject *this)
{
  return (*(_BYTE *)(*((_QWORD *)this + 3) + 452LL) & 4) != 0 || (*((_BYTE *)this + 124) & 4) != 0;
}
