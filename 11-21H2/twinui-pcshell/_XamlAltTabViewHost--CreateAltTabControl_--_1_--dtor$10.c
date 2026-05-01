/*
 * XREFs of _XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor$10 @ 0x1805FA54D
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 32), 0LL);
}
