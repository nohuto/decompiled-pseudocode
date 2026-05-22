/*
 * XREFs of ?Destroy@SharedSectionWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18018BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0 (-Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::SharedSectionWrapper::Destroy(
        DirectComposition::CDelayedDestructionObject **this)
{
  Windows::UI::Composition::SharedAllocationHolder::Destroy(this + 17);
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
