/*
 * XREFs of _Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItemDataViewImpl::SwitchItems::[Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource]::get_::_1_::dtor$0 @ 0x18043F491
 * Callers:
 *     <none>
 * Callees:
 *     ?PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z @ 0x1802DB2FC (-PlacementFree@Heap@Details@Platform@@SAXPEAX0@Z.c)
 */

void __fastcall Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItemDataViewImpl::SwitchItems::_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_::get_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Platform::Details::Heap::PlacementFree(*(void **)(a2 + 64), (void *)0xB0);
}
