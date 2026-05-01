/*
 * XREFs of _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$0 @ 0x180773BDE
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 176), 0LL);
}
