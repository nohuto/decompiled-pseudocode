/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180089F60
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x180089F00 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180085838 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x1800891F0 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008F9A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=42
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        unsigned __int8 a6,
        HSTRING a7)
{
  int AppInstallManager; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int Entitlement; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v14; // rcx
  HSTRING *v15; // r9
  int v16; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  HRESULT v23; // edx
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v27; // rcx
  PVOID Ptr; // rdx
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v36; // rcx
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v50; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v55; // rcx
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v57; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v58; // [rsp+50h] [rbp-20h] BYREF
  int v59[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v60; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING v62; // [rsp+A8h] [rbp+38h] BYREF

  v62 = a4;
  v57 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, &v57);
  Entitlement = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v14 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return Entitlement;
  }
  LOBYTE(v12) = 3;
  LOBYTE(v11) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
    v11,
    v12);
  WindowsDeleteString(0LL);
  string = 0LL;
  v16 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v15);
  Entitlement = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v16);
    WindowsDeleteString(string);
    string = 0LL;
    v17 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return Entitlement;
  }
  v58 = 0LL;
  v18 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v57)(
          v57,
          &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159,
          &v58);
  Entitlement = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v18);
    v19 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v20 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return Entitlement;
  }
  *(_QWORD *)v59 = 0LL;
  v21 = *v58;
  if ( a6 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v21 + 64))(v58, string, a7, a5, v59);
    Entitlement = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v22);
      v25 = *(_QWORD *)v59;
      if ( *(_QWORD *)v59 )
      {
        *(_QWORD *)v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      }
      WindowsDeleteString(string);
      string = 0LL;
      v27 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      return Entitlement;
    }
  }
  else
  {
    Ptr = this[10].Ptr;
    if ( Ptr )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD *, PVOID, HSTRING, HSTRING, HSTRING, int *))(v21 + 56))(
              v58,
              Ptr,
              string,
              a7,
              a5,
              v59);
      Entitlement = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v33);
        v34 = *(_QWORD *)v59;
        if ( *(_QWORD *)v59 )
        {
          *(_QWORD *)v59 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v35 = v58;
        if ( v58 )
        {
          v58 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
        }
        WindowsDeleteString(string);
        string = 0LL;
        v36 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v36 + 16LL))(v36);
        }
        return Entitlement;
      }
    }
    else
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v21 + 48))(v58, string, a7, a5, v59);
      Entitlement = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v29);
        v30 = *(_QWORD *)v59;
        if ( *(_QWORD *)v59 )
        {
          *(_QWORD *)v59 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v31 = v58;
        if ( v58 )
        {
          v58 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
        }
        WindowsDeleteString(string);
        string = 0LL;
        v32 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v32 + 16LL))(v32);
        }
        return Entitlement;
      }
    }
  }
  v60 = 0LL;
  v37 = *(_QWORD *)v59;
  Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(
                  *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v59,
                  v23,
                  v24);
  if ( (Entitlement & 0x80000000) != 0
    || (Entitlement = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 64LL))(v37, &v60),
        (Entitlement & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)Entitlement);
    v52 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = *(_QWORD *)v59;
    if ( *(_QWORD *)v59 )
    {
      *(_QWORD *)v59 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v55 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v55 + 16LL))(v55);
    }
    return Entitlement;
  }
  v38 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v60 + 48LL))(v60, &v62);
  Entitlement = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v38);
    v39 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v40 = *(_QWORD *)v59;
    if ( *(_QWORD *)v59 )
    {
      *(_QWORD *)v59 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v42 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    return Entitlement;
  }
  if ( (_DWORD)v62 )
  {
    Entitlement = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)0x80004005LL);
    v43 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = *(_QWORD *)v59;
    if ( *(_QWORD *)v59 )
    {
      *(_QWORD *)v59 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v46 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v46 + 16LL))(v46);
    }
    return Entitlement;
  }
  v47 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = *(_QWORD *)v59;
  if ( *(_QWORD *)v59 )
  {
    *(_QWORD *)v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v49 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
  }
  WindowsDeleteString(string);
  v50 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v50 + 16LL))(v50);
  }
  return 0LL;
}
