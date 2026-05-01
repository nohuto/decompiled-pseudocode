/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewFilteredCollection_ApplicationViewFilteredCollection_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_IObjectCollection___&__::_1_::dtor$1 @ 0x180688C4C
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewFilteredCollection_ApplicationViewFilteredCollection_IApplicationViewCollection_____IApplicationViewVisibilityDebouncedNotificationService_____IObjectCollection______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 32));
}
