/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180083FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007A078 (--$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007C110 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18007EF6C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18007F2F4 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007FB64 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180083A30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
  int AppInstallManager; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, _QWORD, char, char, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  char v23; // [rsp+20h] [rbp-50h]
  char v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  *a3 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppInstallBatching>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v27[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27);
  v8 = ContentManagement::AppManager::ConvertToStoreRecords(v7, a2, v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)(a1 - 48), &v29);
    v9 = AppInstallManager;
    if ( AppInstallManager >= 0 )
    {
      v25 = 0LL;
      v11 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v29,
              &v25);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v30 = 0LL;
        v12 = v25;
        v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, char, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v25 + 72LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
        v24 = 0;
        v23 = 0;
        v14 = v13(v12, v27[0], 0LL, 0LL, v23, v24, 0LL, &v30);
        v9 = v14;
        if ( v14 >= 0 )
        {
          v26 = 0LL;
          v15 = v30;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(
                 v15,
                 v16,
                 v17);
          if ( v9 >= 0 )
            v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v15)[8])(
                   v15,
                   &v26);
          if ( v9 >= 0 )
          {
            v21 = ContentManagement::AppManager::ConvertFromStoreRecords(v18, v26, a3);
            v9 = v21;
            if ( v21 >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
              v9 = 0;
              goto LABEL_20;
            }
            v19 = (unsigned int)v21;
            v20 = 239LL;
          }
          else
          {
            v19 = (unsigned int)v9;
            v20 = 237LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)v19);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xEA,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v14);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)AppInstallManager);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v8);
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27);
  return (unsigned int)v9;
}
