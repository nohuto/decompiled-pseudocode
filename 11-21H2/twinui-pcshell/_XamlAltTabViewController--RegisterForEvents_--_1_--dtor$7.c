/*
 * XREFs of _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$7 @ 0x18060F4C7
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAltTabViewController::RegisterForEvents_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 272), (void *)0x130);
}
