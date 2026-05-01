/*
 * XREFs of ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544A10
 * Callers:
 *     _lambda_955eb04c377e45185ef03ddb06152220_::__lambda_955eb04c377e45185ef03ddb06152220_ @ 0x1801B5514 (_lambda_955eb04c377e45185ef03ddb06152220_--__lambda_955eb04c377e45185ef03ddb06152220_.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::_CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___ @ 0x1801B5520 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb_ea_1801B5520.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     _CVirtualDesktopManager::SetDesktopWallpaperInternal_::_1_::dtor$1 @ 0x180548661 (_CVirtualDesktopManager--SetDesktopWallpaperInternal_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015C4D8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
