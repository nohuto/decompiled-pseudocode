/*
 * XREFs of ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x180608990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x180608790 (--1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ.c)
 */

VirtualDesktopAnimationSyncNotificationInstance *__fastcall VirtualDesktopAnimationSyncNotificationInstance::`scalar deleting destructor'(
        VirtualDesktopAnimationSyncNotificationInstance *this,
        char a2)
{
  VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
