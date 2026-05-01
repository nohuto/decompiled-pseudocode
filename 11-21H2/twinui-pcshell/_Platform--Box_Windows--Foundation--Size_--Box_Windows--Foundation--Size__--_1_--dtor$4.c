/*
 * XREFs of _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$4 @ 0x180213862
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 96), (void *)0x48);
}
