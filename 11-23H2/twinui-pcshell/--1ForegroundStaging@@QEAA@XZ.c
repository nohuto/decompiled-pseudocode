/*
 * XREFs of ??1ForegroundStaging@@QEAA@XZ @ 0x18014812C
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180145494 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$29 @ 0x1802BC510 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$29.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180549324 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ForegroundStaging::~ForegroundStaging(ForegroundStaging *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
