/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18008D740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??$wait_for_completion_nothrow@_N@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@@Z @ 0x180085F30 (--$wait_for_completion_nothrow@_N@wil@@YAJPEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tag.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        RTL_SRWLOCK *this,
        unsigned __int8 *a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v6; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v7; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  __int64 (__fastcall *v10)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // r14
  HRESULT v11; // eax
  HSTRING v12; // rsi
  HRESULT v13; // eax
  int v14; // eax
  int v15; // r8d
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v17; // rcx
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v22; // rcx
  unsigned __int16 v23; // [rsp+30h] [rbp-29h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24; // [rsp+38h] [rbp-21h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-11h] BYREF
  HSTRING string; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER v28; // [rsp+68h] [rbp+Fh] BYREF
  HSTRING v29; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a2 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v23, a3) < 0 || !(_BYTE)v23 )
    return 2147942405LL;
  v24 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, &v24);
  v6 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v7 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  v25 = 0LL;
  v9 = v24;
  v10 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v24 + 184LL);
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
          0x50u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x18008D9ECLL);
  }
  v12 = string;
  v29 = 0LL;
  v13 = WindowsCreateStringReference(L"Microsoft.WindowsStore", 0x16u, &v28, &v29);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = v10(v9, v29, v12, &v25);
  v6 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    v16 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v16)[2])(v16);
    }
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v6;
  }
  v18 = wil::wait_for_completion_nothrow<bool>(v25, (__int64)a2, v15);
  v6 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v18);
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v19)[2])(v19);
    }
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v6;
  }
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
  }
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
