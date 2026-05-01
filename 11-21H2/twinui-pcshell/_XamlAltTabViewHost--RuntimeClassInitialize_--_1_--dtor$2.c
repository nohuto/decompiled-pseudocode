/*
 * XREFs of _XamlAltTabViewHost::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1805FBB10
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAltTabViewHost::RuntimeClassInitialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 288), 0LL);
}
