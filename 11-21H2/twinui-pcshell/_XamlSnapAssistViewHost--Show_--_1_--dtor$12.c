/*
 * XREFs of _XamlSnapAssistViewHost::Show_::_1_::dtor$12 @ 0x180603C70
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::Show_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), (void *)0x1A8);
}
