/*
 * XREFs of _VirtualDesktopSwitcherController::Initialize_::_1_::dtor$0 @ 0x180612A87
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall VirtualDesktopSwitcherController::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 144), (void *)0x130);
}
