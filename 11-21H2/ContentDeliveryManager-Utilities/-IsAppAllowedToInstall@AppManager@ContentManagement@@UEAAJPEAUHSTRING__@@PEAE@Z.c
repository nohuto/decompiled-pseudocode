/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18008D320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??$wait_for_completion_nothrow@_N@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@@Z @ 0x180085F30 (--$wait_for_completion_nothrow@_N@wil@@YAJPEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tag.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(RTL_SRWLOCK *this, HSTRING a2, bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rcx
  int v10; // eax
  int v11; // r8d
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v26; // rcx
  __int64 (__fastcall ***v27[2])(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v30; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability(
              (CallerIdentity *)L"storeAppInstall",
              (const unsigned __int16 *)&v29,
              a3) < 0
    || !(_BYTE)v29 )
  {
    return 2147942405LL;
  }
  v30 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, &v30);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v8 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  v27[0] = 0LL;
  if ( this[4].Ptr )
  {
    v29 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v30)(
            v30,
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v29);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v14);
      v15 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return v7;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, PVOID, HSTRING, _QWORD, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v29 + 88LL))(
            v29,
            this[4].Ptr,
            a2,
            0LL,
            0LL,
            0LL,
            v27);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v17);
      v18 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v27[0];
      if ( v27[0] )
      {
        v27[0] = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v19)[2])(v19);
      }
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      return v7;
    }
    v21 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, _QWORD))(*(_QWORD *)v30 + 192LL))(
            v30,
            a2,
            v27);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v10);
      v12 = v27[0];
      if ( v27[0] )
      {
        v27[0] = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
      }
      v13 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return v7;
    }
  }
  v22 = wil::wait_for_completion_nothrow<bool>(v27[0], (__int64)a3, v11);
  v7 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v22);
    v23 = v27[0];
    if ( v27[0] )
    {
      v27[0] = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v23)[2])(v23);
    }
    v24 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v7;
  }
  v25 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
  }
  v26 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return 0LL;
}
