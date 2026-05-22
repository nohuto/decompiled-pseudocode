/*
 * XREFs of ?CommentNeedsMarshaling@CompositionPropertyAnimator@Composition@UI@Windows@@MEAA_NXZ @ 0x180088FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommentNeedsMarshaling@ProxyObject@Composition@UI@Windows@@MEAA_NXZ @ 0x18008ADC0 (-CommentNeedsMarshaling@ProxyObject@Composition@UI@Windows@@MEAA_NXZ.c)
 */

char __fastcall Windows::UI::Composition::CompositionPropertyAnimator::CommentNeedsMarshaling(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  char v1; // cl
  bool v3; // al

  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 452LL) & 8) != 0 )
    return 1;
  v3 = Windows::UI::Composition::ProxyObject::CommentNeedsMarshaling(this);
  v1 = 0;
  if ( v3 )
    return 1;
  return v1;
}
