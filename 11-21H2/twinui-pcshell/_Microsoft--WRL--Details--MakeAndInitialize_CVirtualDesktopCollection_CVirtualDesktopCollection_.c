/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory___&_IVirtualDesktopPersistence___&_bool_&__::_1_::dtor$1 @ 0x180221DD8
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopCollection_CVirtualDesktopCollection_IVirtualDesktopFactory_____IVirtualDesktopPersistence_____bool____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 32));
}
