/*
 * XREFs of ??1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x18053EE2C
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop___IVirtualDesktop____::_1_::dtor$0 @ 0x18053E58C (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_18053E58C.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IObjectArray___IVirtualDesktop___IVirtualDesktop___Microsoft::WRL::ComPtr_IObjectArray__Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_IVirtualDesktop____::_1_::dtor$0 @ 0x18053EB2B (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IObj_ea_18053EB2B.c)
 *     ?Release@?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@UEAAKXZ @ 0x18054D6C0 (-Release@-$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::MarshalledData::~MarshalledData(
        VirtualDesktopAnimationSyncNotificationInstance::MarshalledData *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
