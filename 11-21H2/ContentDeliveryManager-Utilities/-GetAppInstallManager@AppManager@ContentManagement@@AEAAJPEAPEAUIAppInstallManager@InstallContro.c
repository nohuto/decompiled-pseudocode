/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350
 * Callers:
 *     ??R_lambda_2071baf0e29165fd8b2c358088e93883_@@QEBAJXZ @ 0x1800870FC (--R_lambda_2071baf0e29165fd8b2c358088e93883_@@QEBAJXZ.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180089F60 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18008AC90 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18008D320 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18008D740 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18008DA00 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18008FF90 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **a2)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK *v4; // rdi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *Ptr; // rbx
  HRESULT v6; // eax
  int v7; // r14d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, RTL_SRWLOCK *); // rbx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall *v11)(_QWORD, GUID *, RTL_SRWLOCK *); // r14
  PVOID v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, RTL_SRWLOCK *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v3 = this + 9;
  *a2 = 0LL;
  v4 = this + 11;
  AcquireSRWLockShared(this + 11);
  Ptr = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( Ptr )
    goto LABEL_30;
  AcquireSRWLockExclusive(v4);
  if ( !v3->Ptr )
  {
    v18 = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(
           L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
           0x47u,
           &hstringHeader,
           &string);
    if ( v6 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
      JUMPOUT(0x180089636LL);
    }
    v7 = RoActivateInstance(string, &v19);
    if ( v7 >= 0 )
    {
      if ( *(_QWORD *)&GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v8 = v19;
        v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
LABEL_12:
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F3,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v7);
          v9 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
          }
          if ( v4 )
            ReleaseSRWLockExclusive(v4);
          return (unsigned int)v7;
        }
        v11 = **v8;
        v12 = v3->Ptr;
        if ( v3->Ptr )
        {
          v3->Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v11(v8, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, v3);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F4,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v13);
          v15 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
          }
          if ( v4 )
            ReleaseSRWLockExclusive(v4);
          return v14;
        }
        v16 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v16)[2])(v16);
        }
        goto LABEL_28;
      }
      v7 = (**v19)(v19, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, (RTL_SRWLOCK *)&v18);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *)))(*v19)[2])(v19);
    }
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *))v18;
    goto LABEL_12;
  }
LABEL_28:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
LABEL_30:
  v17 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v3->Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v17 + 8LL))(v17);
    v17 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  }
  *a2 = v17;
  return 0LL;
}
