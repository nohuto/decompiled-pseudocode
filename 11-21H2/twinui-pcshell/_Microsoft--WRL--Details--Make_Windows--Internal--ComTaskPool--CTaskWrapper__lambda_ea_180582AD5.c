/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff__&___lambda_ad47fb4abf013fdcb1f378688d8640ff__&__::_1_::dtor$2 @ 0x180582AD5
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff______lambda_ad47fb4abf013fdcb1f378688d8640ff_____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 40), *(void **)(a2 + 104));
}
