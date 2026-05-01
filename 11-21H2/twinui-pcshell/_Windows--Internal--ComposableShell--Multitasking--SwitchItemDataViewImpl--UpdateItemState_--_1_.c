/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState_::_1_::dtor$0 @ 0x180439782
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 56), (void *)0x50);
}
