/*
 * XREFs of ?Destroy@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18014AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJXZ @ 0x180092348 (-Clear@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJXZ.c)
 */

void __fastcall Windows::UI::Composition::ImplicitAnimationCollection::Destroy(
        Windows::UI::Composition::ImplicitAnimationCollection *this)
{
  Windows::UI::Composition::ImplicitAnimationCollection::Clear(this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
