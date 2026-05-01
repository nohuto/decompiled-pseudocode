/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@QEAA@XZ @ 0x18053EDDC
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop____::_1_::dtor$0 @ 0x18053E3CD (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_I.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop___Microsoft::WRL::ComPtr_IObjectArray__Microsoft::WRL::ComPtr_IVirtualDesktop____::_1_::dtor$0 @ 0x18053E8D1 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IObjectArray___IV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::~tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
