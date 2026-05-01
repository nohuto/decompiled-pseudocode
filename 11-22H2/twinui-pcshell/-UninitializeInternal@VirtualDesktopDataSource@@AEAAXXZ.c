/*
 * XREFs of ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180540B14
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180139210 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     sub_18034A584 @ 0x18034A584 (sub_18034A584.c)
 *     wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___ @ 0x18053E720 (wil--details--ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___--_ScopeExitFn__lambda_2459.c)
 *     ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x180540A20 (-Uninitialize@VirtualDesktopDataSource@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall VirtualDesktopDataSource::UninitializeInternal(VirtualDesktopDataSource *this)
{
  SmartCookie::Unregister((VirtualDesktopDataSource *)((char *)this + 136));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
}
