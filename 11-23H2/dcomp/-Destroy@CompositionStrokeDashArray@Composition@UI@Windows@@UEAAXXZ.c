/*
 * XREFs of ?Destroy@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ @ 0x1801A0040
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAXXZ @ 0x1801707F8 (-Clear@-$VectorBasedCollection@M@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionStrokeDashArray::Destroy(
        Windows::UI::Composition::CompositionStrokeDashArray *this)
{
  *((_QWORD *)this + 23) = 0LL;
  Windows::UI::Composition::VectorBasedCollection<float>::Clear((_QWORD *)this + 16);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
