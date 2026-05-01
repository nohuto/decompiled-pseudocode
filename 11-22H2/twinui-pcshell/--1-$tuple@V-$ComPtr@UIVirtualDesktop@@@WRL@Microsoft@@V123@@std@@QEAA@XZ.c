/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ @ 0x1805F989C
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop____::_1_::dtor$0 @ 0x1805F916F (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_1805F916F.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_IVirtualDesktop____::_1_::dtor$0 @ 0x1805F9540 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_1805F9540.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
