/*
 * XREFs of ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180010040
 * Callers:
 *     ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180201F80 (-__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShe_ea_180201F80.c)
 *     ?__abi_Release@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAKXZ @ 0x180201FA0 (-__abi_Release@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAKXZ.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1800100D8 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::__abi_Release(
        __int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v5; // rbx

  v3 = __abi_FTMWeakRefData::Decrement(a1 + 24);
  if ( !v3 )
  {
    Platform::Details::__abi_CapturePtr::`scalar deleting destructor'(
      (Platform::Details::__abi_CapturePtr *)(a1 + 40),
      v2);
    v5 = *(Platform::Details::ControlBlock **)(a1 + 24);
    Platform::Details::ControlBlock::ReleaseTarget(v5);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
