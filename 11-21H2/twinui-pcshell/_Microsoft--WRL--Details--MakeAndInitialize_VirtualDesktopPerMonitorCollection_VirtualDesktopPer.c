/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopPerMonitorCollection_VirtualDesktopPerMonitorCollection_HMONITOR_____&_IThumbnailDeviceSource___&__::_1_::dtor$1 @ 0x18021B502
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopPerMonitorCollection_VirtualDesktopPerMonitorCollection_HMONITOR_______IThumbnailDeviceSource______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 32), *(void **)(a2 + 104));
}
