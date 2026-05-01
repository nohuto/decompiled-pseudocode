/*
 * XREFs of _TaskViewFrame::RegisterForEvents_::_1_::dtor$8 @ 0x1802C382A
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::RegisterForEvents_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 224), (void *)0x130);
}
