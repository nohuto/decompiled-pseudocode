/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA@XZ @ 0x18053EE04
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop___unsigned_int_unsigned_int__::_1_::dtor$0 @ 0x18053E4A3 (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_18053E4A3.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop___unsigned_int_unsigned_int_Microsoft::WRL::ComPtr_IObjectArray__Microsoft::WRL::ComPtr_IVirtualDesktop__unsigned_int_unsigned_int__::_1_::dtor$0 @ 0x18053E9F3 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IObj_ea_18053E9F3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::~tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 8));
}
