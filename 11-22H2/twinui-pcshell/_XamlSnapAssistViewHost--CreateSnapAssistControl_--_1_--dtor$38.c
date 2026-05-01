/*
 * XREFs of _XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor$38 @ 0x18076C009
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewHost::CreateSnapAssistControl_::_1_::dtor_38(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), 0LL);
}
