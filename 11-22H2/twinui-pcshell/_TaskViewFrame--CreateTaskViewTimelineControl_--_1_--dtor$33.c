/*
 * XREFs of _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$33 @ 0x1802C36E1
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 112), 0LL);
}
