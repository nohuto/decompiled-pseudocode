/*
 * XREFs of ?Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ @ 0x180177430
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ @ 0x180009408 (-Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionContainerShape::Destroy(
        Windows::UI::Composition::CompositionContainerShape *this)
{
  Windows::UI::Composition::ShapeContainer::Uninitialize((Windows::UI::Composition::CompositionContainerShape *)((char *)this + 176));
  Windows::UI::Composition::CompositionShape::Destroy(this);
}
