/*
 * XREFs of ??1?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800CA368
 * Callers:
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$5 @ 0x1800F5718 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800F5718.c)
 * Callees:
 *     ??1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ @ 0x1800CA46C (--1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>::~unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>(
        CreativeFramework::NotificationManager::ToastHelpers **a1)
{
  CreativeFramework::NotificationManager::ToastHelpers *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CreativeFramework::NotificationManager::ToastHelpers::~ToastHelpers(*a1);
    operator delete(v1);
  }
}
