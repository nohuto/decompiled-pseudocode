/*
 * XREFs of ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x180084590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$BlockOnCompletionAndGetResults@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@UIAppInstallItem@23456@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007A9E0 (--$BlockOnCompletionAndGetResults@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationMod.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007FBB4 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartRestore(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 a5)
{
  RTL_SRWLOCK *v8; // rbx
  int AppInstallManager; // eax
  unsigned int v10; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  __int64 (__fastcall *v12)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING, _QWORD, __int64, HSTRING, HSTRING, __int64 *); // rdi
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF

  v21 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(v8, &v21);
  v10 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    v24 = 0LL;
    v11 = v21;
    v12 = **(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v21;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    v13 = v12(v11, &GUID_43e87bd7_602a_4b0e_a674_ebad56c3a0f8, &v24);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v20 = 0LL;
      v14 = v24;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      LOBYTE(v16) = a5;
      v17 = v15(v14, a2, 0LL, v16, a3, a4, &v20);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v22[0] = 0LL;
        v18 = BlockOnCompletionAndGetResults<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *,Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>(
                v20,
                v22);
        v10 = v18;
        if ( v18 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
          v10 = 0;
          goto LABEL_12;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v17);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  return v10;
}
