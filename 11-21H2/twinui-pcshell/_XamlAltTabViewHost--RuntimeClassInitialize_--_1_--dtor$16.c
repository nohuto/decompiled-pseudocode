/*
 * XREFs of _XamlAltTabViewHost::RuntimeClassInitialize_::_1_::dtor$16 @ 0x1805FBB6A
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAltTabViewHost::RuntimeClassInitialize_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 272), (void *)0x190);
}
