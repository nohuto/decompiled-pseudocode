/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopCollection_VirtualDesktopCollection_IThumbnailDeviceSource___&__::_1_::dtor$1 @ 0x1802C2C86
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopCollection_VirtualDesktopCollection_IThumbnailDeviceSource______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 88), *(void **)(a2 + 80));
}
