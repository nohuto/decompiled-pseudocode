/*
 * XREFs of _TaskViewFrame::RegisterForEvents_::_1_::dtor$5 @ 0x180213140
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::RegisterForEvents_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 384), (void *)0x130);
}
