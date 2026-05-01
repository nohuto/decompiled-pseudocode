/*
 * XREFs of ??1ForegroundStaging@@QEAA@XZ @ 0x180149CAC
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180149A6C (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$28 @ 0x18021EBF6 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$28.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180493790 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
