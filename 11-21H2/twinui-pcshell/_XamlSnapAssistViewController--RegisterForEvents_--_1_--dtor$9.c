/*
 * XREFs of _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$9 @ 0x180611ED3
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 336), (void *)0x130);
}
