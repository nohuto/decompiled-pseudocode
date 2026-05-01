/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e____::_1_::dtor$2 @ 0x1801A6EEE
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 88));
}
