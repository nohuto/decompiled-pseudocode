/*
 * XREFs of _TaskViewFrame::RegisterForEvents_::_1_::dtor$11 @ 0x1802131B2
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::RegisterForEvents_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 384), (void *)0x130);
}
