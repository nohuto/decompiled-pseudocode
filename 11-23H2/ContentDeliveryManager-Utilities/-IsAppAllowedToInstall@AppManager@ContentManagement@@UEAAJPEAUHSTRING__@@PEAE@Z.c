/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180082500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006D9C4 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 *     ??$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007A01C (--$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$ComPtr@UIAp.c)
 *     ?EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ @ 0x18007F784 (-EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007FB64 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(
        ContentManagement::AppManager *this,
        __int64 a2,
        bool *a3)
{
  __int64 result; // rax
  int AppInstallManager; // eax
  unsigned int v8; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  __int64 (__fastcall *v10)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, _QWORD); // rdi
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  result = ContentManagement::EnsureCallingProcessHasStoreAppInstallCapability(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v18);
    AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)this - 6, v18);
    v8 = AppInstallManager;
    if ( AppInstallManager < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)AppInstallManager);
LABEL_18:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v18);
      return v8;
    }
    v20 = 0LL;
    if ( !*((_QWORD *)this + 4) )
    {
      v9 = v18[0];
      v10 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, _QWORD))(*(_QWORD *)v18[0] + 192LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
      v11 = v10(v9, a2, &v20);
      v8 = v11;
      if ( v11 < 0 )
      {
        v13 = 89LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_8:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
        goto LABEL_18;
      }
LABEL_15:
      v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(
              v20,
              (__int64)a3,
              v12);
      v8 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
        v8 = 0;
        goto LABEL_18;
      }
      v13 = 104LL;
      goto LABEL_7;
    }
    v21 = 0LL;
    v14 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v18,
            &v21);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v16 = v21;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v21 + 88LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
      v14 = v17(v16, *((_QWORD *)this + 4), a2, 0LL, 0LL, 0LL, &v20);
      v8 = v14;
      if ( v14 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        goto LABEL_15;
      }
      v15 = 101LL;
    }
    else
    {
      v15 = 94LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    goto LABEL_8;
  }
  return result;
}
