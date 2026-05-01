/*
 * XREFs of ??1?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@QEAA@XZ @ 0x18048FD90
 * Callers:
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$0 @ 0x18021D05B (_VirtualDesktop_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop___&_IThumbnailDeviceSource___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x18021F72D (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop___-_IT.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktop>::~ComPtr<VirtualDesktop>(VirtualDesktop **a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(a1);
}
