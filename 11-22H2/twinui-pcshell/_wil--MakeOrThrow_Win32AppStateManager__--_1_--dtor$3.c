/*
 * XREFs of _wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor$3 @ 0x1802B8C4D
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), *(void **)(a2 + 96));
}
