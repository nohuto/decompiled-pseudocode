/*
 * XREFs of _wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor$3 @ 0x1802236BB
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), *(void **)(a2 + 96));
}
