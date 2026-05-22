/*
 * XREFs of ?Destroy@CompositionAnimationGroup@Composition@UI@Windows@@UEAAXXZ @ 0x1801518F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ @ 0x1801520C4 (-RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimationGroup::Destroy(
        Windows::UI::Composition::CompositionAnimationGroup *this)
{
  Windows::UI::Composition::CompositionAnimationGroup::RemoveAll(this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
