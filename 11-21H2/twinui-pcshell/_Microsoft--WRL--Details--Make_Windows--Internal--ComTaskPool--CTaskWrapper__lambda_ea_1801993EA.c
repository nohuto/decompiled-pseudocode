/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700_____lambda_731699364cbddcd54af95a8546718700____::_1_::dtor$2 @ 0x1801993EA
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700_____lambda_731699364cbddcd54af95a8546718700____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 104));
}
