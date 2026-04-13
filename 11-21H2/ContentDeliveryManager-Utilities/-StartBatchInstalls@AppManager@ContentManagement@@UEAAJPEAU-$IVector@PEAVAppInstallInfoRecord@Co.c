/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18008FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18008550C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180087C8C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x1800883C0 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180089A80 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int AppInstallManager; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  HRESULT v19; // edx
  __int64 v20; // r8
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v23; // rcx
  __int64 v24; // rcx
  int (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v30; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v35; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // rcx
  int (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v41; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v42; // rcx
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-60h]
  int v45; // [rsp+28h] [rbp-58h]
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  int (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-28h] BYREF
  __int64 v48; // [rsp+60h] [rbp-20h] BYREF
  __int64 v49; // [rsp+68h] [rbp-18h]
  signed __int32 v50[4]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v52; // [rsp+B0h] [rbp+30h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v53; // [rsp+B8h] [rbp+38h] BYREF

  *a3 = 0LL;
  v6 = `wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v49 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppInstallBatching>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl,
                       v50);
    v6 = v49;
  }
  LODWORD(v52) = 0;
  BYTE4(v52) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF4E8,
    0x68C9CDu,
    (v6 >> 8) & 1,
    (v6 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v52,
    1,
    3);
  v52 = 0LL;
  v8 = ContentManagement::AppManager::ConvertToStoreRecords(v7, a2, &v52);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v8);
    v10 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  v53 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)(a1 - 48), &v53);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v12 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v9;
  }
  v46 = 0LL;
  v14 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v53)(
          v53,
          &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
          &v46);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    v15 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v9;
  }
  v47 = 0LL;
  LOBYTE(v45) = 0;
  LOBYTE(v44) = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int, _QWORD, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v46 + 72LL))(
          v46,
          v52,
          0LL,
          0LL,
          v44,
          v45,
          0LL,
          &v47);
  v9 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v18);
    v21 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
    }
    v22 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v9;
  }
  v48 = 0LL;
  v25 = v47;
  v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(
         v47,
         v19,
         v20);
  if ( (v9 & 0x80000000) != 0
    || (v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v25)[8])(v25, &v48),
        (v9 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v9);
    v39 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v40 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v40)[2])(v40);
    }
    v41 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    return v9;
  }
  v27 = ContentManagement::AppManager::ConvertFromStoreRecords(v26, v48, a3);
  v9 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v27);
    v28 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v29)[2])(v29);
    }
    v30 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return v9;
  }
  v33 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v34)[2])(v34);
  }
  v35 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return 0LL;
}
