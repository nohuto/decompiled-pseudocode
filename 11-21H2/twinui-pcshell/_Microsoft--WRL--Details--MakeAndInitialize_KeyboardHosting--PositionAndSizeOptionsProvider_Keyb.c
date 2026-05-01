/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::PositionAndSizeOptionsProvider_KeyboardHosting::PositionAndSizeOptionsProvider__::_1_::dtor$1 @ 0x18021BA0A
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::PositionAndSizeOptionsProvider_KeyboardHosting::PositionAndSizeOptionsProvider__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), *(void **)(a2 + 56));
}
