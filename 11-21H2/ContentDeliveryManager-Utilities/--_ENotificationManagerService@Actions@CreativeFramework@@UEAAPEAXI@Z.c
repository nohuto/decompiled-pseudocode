/*
 * XREFs of ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CA780
 * Callers:
 *     <none>
 * Callees:
 *     ??1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CA39C (--1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::NotificationManagerService *__fastcall CreativeFramework::Actions::NotificationManagerService::`vector deleting destructor'(
        CreativeFramework::Actions::NotificationManagerService *this,
        char a2)
{
  CreativeFramework::Actions::NotificationManagerService::~NotificationManagerService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
