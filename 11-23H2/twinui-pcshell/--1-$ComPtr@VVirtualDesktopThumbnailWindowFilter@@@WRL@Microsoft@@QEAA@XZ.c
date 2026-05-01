/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAA@XZ @ 0x18055EF3C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopThumbnailWindowFilter_VirtualDesktopThumbnailWindowFilter_IVirtualDesktopManagerInternal___&_ITabletModeController___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x18055EE20 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopThumbnailWindowFilter_Vir_ea_18055EE20.c)
 *     _VirtualDesktopThumbnailWindowFilter_CreateInstance_::_1_::dtor$0 @ 0x18055FDF3 (_VirtualDesktopThumbnailWindowFilter_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::~ComPtr<VirtualDesktopThumbnailWindowFilter>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(a1);
}
