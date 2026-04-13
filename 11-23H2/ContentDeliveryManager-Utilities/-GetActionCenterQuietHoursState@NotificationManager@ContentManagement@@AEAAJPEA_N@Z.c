/*
 * XREFs of ?GetActionCenterQuietHoursState@NotificationManager@ContentManagement@@AEAAJPEA_N@Z @ 0x180032F2C
 * Callers:
 *     ?QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsBlockingStateFlags@2@@Z @ 0x18003AF10 (-QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::NotificationManager::GetActionCenterQuietHoursState(
        ContentManagement::NotificationManager *this,
        bool *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ContentManagement::NotificationManager *v9; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = this;
  *a2 = 0;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v3 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(LPVOID, __int64, ContentManagement::NotificationManager **))(*(_QWORD *)v10 + 32LL))(
           v10,
           7LL,
           &v9);
    v4 = v3;
    if ( v3 >= 0 )
    {
      *a2 = (_DWORD)v9 == 0;
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 287LL;
  }
  else
  {
    v5 = 284LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3,
    ppv);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v4;
}
