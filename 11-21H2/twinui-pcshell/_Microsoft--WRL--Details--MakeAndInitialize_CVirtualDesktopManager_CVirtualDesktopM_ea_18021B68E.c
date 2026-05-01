/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence___&_IVirtualDesktopGroupedViewsPolicy___&_IVirtualDesktopLock___&__::_1_::dtor$1 @ 0x18021B68E
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection_____IVirtualDesktopVisibilityPolicy_____IVirtualDesktopNotification_____IVirtualDesktopForegroundPolicy_____IVirtualDesktopPersistence_____IVirtualDesktopGroupedViewsPolicy_____IVirtualDesktopLock______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 72), *(void **)(a2 + 64));
}
