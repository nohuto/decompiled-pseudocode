/*
 * XREFs of _Microsoft::WRL::Details::Make_UwpAppStateManager__::_1_::dtor$2 @ 0x180222C08
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_UwpAppStateManager__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 104), *(void **)(a2 + 96));
}
