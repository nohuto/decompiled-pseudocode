/*
 * XREFs of ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x18054D530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x18054D4E0 (--1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ.c)
 */

RTL_SRWLOCK **__fastcall VirtualDesktopAnimationSyncNotificationInstance::`scalar deleting destructor'(
        RTL_SRWLOCK **this,
        char a2)
{
  VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
