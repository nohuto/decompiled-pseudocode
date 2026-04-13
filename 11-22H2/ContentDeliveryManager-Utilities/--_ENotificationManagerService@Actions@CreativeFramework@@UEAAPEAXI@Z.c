/*
 * XREFs of ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800B73F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800B71E0 (--1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

void **__fastcall CreativeFramework::Actions::NotificationManagerService::`vector deleting destructor'(
        void **this,
        char a2)
{
  CreativeFramework::Actions::NotificationManagerService::~NotificationManagerService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
