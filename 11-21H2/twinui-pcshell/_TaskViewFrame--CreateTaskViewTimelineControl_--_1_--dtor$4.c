/*
 * XREFs of _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$4 @ 0x1802135F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 48), 0LL);
}
