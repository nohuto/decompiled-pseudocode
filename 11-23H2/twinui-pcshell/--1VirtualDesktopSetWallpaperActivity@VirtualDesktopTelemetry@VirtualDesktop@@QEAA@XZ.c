/*
 * XREFs of ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18060054C
 * Callers:
 *     _lambda_72859ebc22ba6b41914b9cba0f951dda_::__lambda_72859ebc22ba6b41914b9cba0f951dda_ @ 0x180215280 (_lambda_72859ebc22ba6b41914b9cba0f951dda_--__lambda_72859ebc22ba6b41914b9cba0f951dda_.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::_CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x18021528C (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba_ea_18021528C.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     _CVirtualDesktopManager::SetDesktopWallpaperInternal_::_1_::dtor$1 @ 0x180603B58 (_CVirtualDesktopManager--SetDesktopWallpaperInternal_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801481BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
