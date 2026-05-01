/*
 * XREFs of ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x180081DD0
 * Callers:
 *     ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180081C70 (-__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x18077B100 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x18006AE48 (-Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z.c)
 */

struct Platform::Details::__abi_CaptureBase **__fastcall Platform::Details::__abi_CapturePtr::`scalar deleting destructor'(
        struct Platform::Details::__abi_CaptureBase **this)
{
  Platform::Details::__abi_CaptureBase::Delete(
    (Platform::Details::__abi_CaptureBase *)this,
    this[32],
    (struct Platform::Details::__abi_CaptureBase *)this);
  return this;
}
