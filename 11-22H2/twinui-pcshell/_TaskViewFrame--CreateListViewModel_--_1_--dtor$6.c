/*
 * XREFs of _TaskViewFrame::CreateListViewModel_::_1_::dtor$6 @ 0x1802C319C
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall TaskViewFrame::CreateListViewModel_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 88), 0LL);
}
