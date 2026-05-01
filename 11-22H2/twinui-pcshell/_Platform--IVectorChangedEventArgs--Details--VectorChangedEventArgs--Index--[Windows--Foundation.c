/*
 * XREFs of _Platform::IVectorChangedEventArgs::Details::VectorChangedEventArgs::Index::[Windows::Foundation::Collections::IVectorChangedEventArgs]::get_::_1_::dtor$0 @ 0x180785BBF
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x180392A24 (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Platform::IVectorChangedEventArgs::Details::VectorChangedEventArgs::Index::_Windows::Foundation::Collections::IVectorChangedEventArgs_::get_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 56), (void *)0x90);
}
