/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_GammaFlashAsyncOperation_Windows::Foundation::IAsyncAction_float_&_unsigned_int_&_unsigned_int_&__::_1_::dtor$1 @ 0x18032703A
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_GammaFlashAsyncOperation_Windows::Foundation::IAsyncAction_float___unsigned_int___unsigned_int____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 80));
}
