/*
 * XREFs of ??1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x180608760
 * Callers:
 *     ?Release@?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@UEAAKXZ @ 0x180608BA0 (-Release@-$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::MarshalledData::~MarshalledData(
        VirtualDesktopAnimationSyncNotificationInstance::MarshalledData *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
