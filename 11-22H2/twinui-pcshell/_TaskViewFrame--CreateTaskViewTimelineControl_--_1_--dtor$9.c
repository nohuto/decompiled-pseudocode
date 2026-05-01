/*
 * XREFs of _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$9 @ 0x1802C35FA
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 72), 0LL);
}
