/*
 * XREFs of ?PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ @ 0x180012A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ @ 0x1800875D4 (-Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::PostDestroy(
        Windows::UI::Composition::CompositionAnchor *this)
{
  Microsoft::WRL2::ContextLatchedInvoke::Cancel((Windows::UI::Composition::CompositionAnchor *)((char *)this + 216));
  Windows::UI::Composition::CompositionObject::PostDestroy(this);
}
