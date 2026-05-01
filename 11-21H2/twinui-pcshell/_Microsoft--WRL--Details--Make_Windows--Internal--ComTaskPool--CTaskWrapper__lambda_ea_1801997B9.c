/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8____::_1_::dtor$2 @ 0x1801997B9
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 104));
}
