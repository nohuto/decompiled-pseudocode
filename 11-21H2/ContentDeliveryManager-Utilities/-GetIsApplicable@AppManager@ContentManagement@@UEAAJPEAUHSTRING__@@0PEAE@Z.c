/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18008AC90
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
__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        RTL_SRWLOCK *this,
        HSTRING a2,
        bool *a3,
        unsigned __int8 *a4)
{
  int AppInstallManager; // eax
  unsigned int v9; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v10; // rcx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, HSTRING, bool *, int *); // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v28; // rcx
  __int64 v29; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v30; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v31; // [rsp+30h] [rbp-10h] BYREF
  int v32[2]; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v34; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability(
              (CallerIdentity *)L"storeAppInstall",
              (const unsigned __int16 *)&v34,
              a3) < 0
    || !(_BYTE)v34 )
  {
    return 2147942405LL;
  }
  v31 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, &v31);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v10 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  *(_QWORD *)v32 = 0LL;
  if ( this[4].Ptr )
  {
    v34 = 0LL;
    v16 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v31)(
            v31,
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v34);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v16);
      v17 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( *(_QWORD *)v32 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
      v18 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v9;
    }
    v19 = v34;
    v20 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, bool *, int *))(*(_QWORD *)v34 + 96LL);
    if ( *(_QWORD *)v32 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
    v21 = v20(v19, this[4].Ptr, a2, a3, v32);
    v9 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v21);
      v22 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      return v9;
    }
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, bool *, int *))(*(_QWORD *)v31 + 144LL))(
            v31,
            a2,
            a3,
            v32);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v12);
      v14 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return v9;
    }
  }
  v26 = wil::wait_for_completion_nothrow<bool>(
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v32,
          (__int64)a4,
          v13);
  v9 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v26);
    v27 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 )
    {
      *(_QWORD *)v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return v9;
  }
  v29 = *(_QWORD *)v32;
  if ( *(_QWORD *)v32 )
  {
    *(_QWORD *)v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return 0LL;
}
