/*
 * XREFs of ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18008DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::MoveAppInstallToFrontOfQueue(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING a3)
{
  int AppInstallManager; // eax
  bool *v6; // r8
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // rcx
  __int64 v16; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v17; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int16 v21; // [rsp+50h] [rbp+20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, &v22);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v8 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v21, v6) >= 0 && (_BYTE)v21 )
  {
    v19 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v22)(
            v22,
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v10);
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return v7;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING))(*(_QWORD *)v19 + 104LL))(v19, a2, a3);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v13);
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return v7;
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
  else
  {
    v18 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return 2147942405LL;
  }
}
