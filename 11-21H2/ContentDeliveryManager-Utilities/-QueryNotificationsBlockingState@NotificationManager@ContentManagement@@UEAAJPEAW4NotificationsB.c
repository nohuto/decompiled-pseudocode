/*
 * XREFs of ?QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsBlockingStateFlags@2@@Z @ 0x18003F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::NotificationManager::QueryNotificationsBlockingState(
        ContentManagement::NotificationManager *this,
        enum ContentManagement::NotificationsBlockingStateFlags *a2)
{
  int v3; // ebx
  HRESULT v4; // edi
  __int64 v5; // rdx
  HRESULT v7; // eax
  LPVOID v8; // rcx
  int v9; // eax
  LPVOID v10; // rcx
  bool v11; // di
  LPVOID v12; // rcx
  int ppv; // [rsp+20h] [rbp-10h]
  int ppva; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  QUERY_USER_NOTIFICATION_STATE pquns; // [rsp+58h] [rbp+28h] BYREF
  int v17; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v18; // [rsp+68h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  v4 = SHQueryUserNotificationState(&pquns);
  if ( v4 < 0 )
  {
    v5 = 201LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    return (unsigned int)v4;
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
  v18 = 0LL;
  v7 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &v18);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      ppva);
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
    }
LABEL_17:
    v5 = 219LL;
    goto LABEL_3;
  }
  v9 = (*(__int64 (__fastcall **)(LPVOID, __int64, int *))(*(_QWORD *)v18 + 32LL))(v18, 7LL, &v17);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9,
      ppva);
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_17;
  }
  v11 = v17 == 0;
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 )
    v3 |= 8u;
  *(_DWORD *)a2 = v3;
  return 0LL;
}
