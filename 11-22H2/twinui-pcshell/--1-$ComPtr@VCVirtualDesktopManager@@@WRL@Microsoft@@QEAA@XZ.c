/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1806002BC
 * Callers:
 *     _CVirtualDesktopManager_CreateInstance_::_1_::dtor$0 @ 0x1802C5FC8 (_CVirtualDesktopManager_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence___&_std::nullptr_t_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1802C5FDA (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_1802C5FDA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopManager>::~ComPtr<CVirtualDesktopManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(a1);
}
