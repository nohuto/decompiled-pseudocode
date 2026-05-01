/*
 * XREFs of _Platform::Collections::Details::ValidateCounter_::_1_::dtor$0 @ 0x1807826A5
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Platform::Collections::Details::ValidateCounter_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), (void *)0x90);
}
