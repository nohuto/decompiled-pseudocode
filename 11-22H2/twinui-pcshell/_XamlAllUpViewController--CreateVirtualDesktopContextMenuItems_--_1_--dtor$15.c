/*
 * XREFs of _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$15 @ 0x18077ED42
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 200), 0LL);
}
