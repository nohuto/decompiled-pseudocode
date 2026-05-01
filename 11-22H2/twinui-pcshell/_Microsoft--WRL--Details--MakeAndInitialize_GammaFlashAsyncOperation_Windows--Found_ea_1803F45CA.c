/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_GammaFlashAsyncOperation_Windows::Foundation::IAsyncAction_float_&_unsigned_int_&_unsigned_int_&__::_1_::dtor$1 @ 0x1803F45CA
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_GammaFlashAsyncOperation_Windows::Foundation::IAsyncAction_float___unsigned_int___unsigned_int____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 80));
}
