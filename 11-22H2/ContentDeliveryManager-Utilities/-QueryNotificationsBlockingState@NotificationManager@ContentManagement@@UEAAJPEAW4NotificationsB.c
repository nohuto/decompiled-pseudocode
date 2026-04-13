/*
 * XREFs of ?QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsBlockingStateFlags@2@@Z @ 0x18003AF10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActionCenterQuietHoursState@NotificationManager@ContentManagement@@AEAAJPEA_N@Z @ 0x180032F2C (-GetActionCenterQuietHoursState@NotificationManager@ContentManagement@@AEAAJPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::NotificationManager::QueryNotificationsBlockingState(
        ContentManagement::NotificationManager *this,
        enum ContentManagement::NotificationsBlockingStateFlags *a2)
{
  int v3; // ebx
  ContentManagement::NotificationManager *v4; // rcx
  HRESULT ActionCenterQuietHoursState; // edi
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+38h] [rbp+10h] BYREF
  QUERY_USER_NOTIFICATION_STATE pquns; // [rsp+40h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  ActionCenterQuietHoursState = SHQueryUserNotificationState(&pquns);
  if ( ActionCenterQuietHoursState < 0 )
  {
    v6 = 203LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActionCenterQuietHoursState,
      v8);
    return (unsigned int)ActionCenterQuietHoursState;
  }
  switch ( pquns )
  {
    case QUNS_BUSY:
      v3 = 1;
      break;
    case QUNS_PRESENTATION_MODE:
      v3 = 4;
      break;
    case QUNS_QUIET_TIME:
      v3 = 2;
      break;
  }
  ActionCenterQuietHoursState = ContentManagement::NotificationManager::GetActionCenterQuietHoursState(v4, &v10);
  if ( ActionCenterQuietHoursState < 0 )
  {
    v6 = 221LL;
    goto LABEL_3;
  }
  if ( v10 )
    v3 |= 8u;
  *(_DWORD *)a2 = v3;
  return 0LL;
}
