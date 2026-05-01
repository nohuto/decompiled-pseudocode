/*
 * XREFs of _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$1 @ 0x18077DE38
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), 0LL);
}
