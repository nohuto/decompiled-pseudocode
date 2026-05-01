/*
 * XREFs of ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180426710
 * Callers:
 *     ?__abi_Release@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@W7E$AAAKXZ @ 0x1801FEDE0 (-__abi_Release@-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Intern.c)
 *     ?__abi_Release@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@WBA@E$AAAKXZ @ 0x1801FEE00 (-__abi_Release@-$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Inte.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1800100D8 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::__abi_Release(
        __int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 24));
  if ( !v2 )
  {
    Platform::Details::__abi_CapturePtr::`scalar deleting destructor'((struct Platform::Details::__abi_CaptureBase **)(a1 + 40));
    v3 = *(Platform::Details::ControlBlock **)(a1 + 24);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
