/*
 * XREFs of ??R_lambda_2071baf0e29165fd8b2c358088e93883_@@QEBAJXZ @ 0x1800870FC
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180090860 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800851E0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180089350 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall _lambda_2071baf0e29165fd8b2c358088e93883_::operator()(__int64 a1)
{
  int AppInstallManager; // eax
  unsigned int v3; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v4; // rcx
  int v5; // eax
  _QWORD *v6; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  HRESULT v11; // edx
  __int64 v12; // r8
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v14; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // rcx
  int v16; // eax
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v18; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v19; // rcx
  int (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v21; // rcx
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v23; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24; // rcx
  __int64 v26; // rcx
  int (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v28; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v29; // rcx
  char v30; // [rsp+28h] [rbp-48h]
  char v31; // [rsp+30h] [rbp-40h]
  char v32; // [rsp+30h] [rbp-40h]
  char v33; // [rsp+38h] [rbp-38h]
  char v34; // [rsp+38h] [rbp-38h]
  char v35; // [rsp+40h] [rbp-30h]
  char v36; // [rsp+40h] [rbp-30h]
  char v37; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v39; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD *v40; // [rsp+B8h] [rbp+48h] BYREF
  int (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+C0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+58h] BYREF

  v39 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(*(ContentManagement::AppManager **)a1, &v39);
  v3 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    v4 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return v3;
  }
  v40 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v39)(
         v39,
         &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
         &v40);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v5);
    v6 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
    v7 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v3;
  }
  v41 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v9 = *v40;
  if ( v8 )
  {
    v37 = 0;
    v36 = **(_BYTE **)(a1 + 48);
    v34 = **(_BYTE **)(a1 + 40);
    v32 = 0;
    v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 64))(
            v40,
            v8,
            **(_QWORD **)(a1 + 8),
            **(_QWORD **)(a1 + 16),
            **(_QWORD **)(a1 + 24),
            **(_QWORD **)(a1 + 32),
            v32,
            v34,
            v36,
            v37,
            **(_QWORD **)(a1 + 56),
            0LL,
            &v41);
    v3 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v16);
      v17 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v17)[2])(v17);
      }
      v18 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      }
      v19 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      return v3;
    }
  }
  else
  {
    v35 = 0;
    v33 = **(_BYTE **)(a1 + 48);
    v31 = **(_BYTE **)(a1 + 40);
    v30 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 56))(
            v40,
            **(_QWORD **)(a1 + 8),
            **(_QWORD **)(a1 + 16),
            **(_QWORD **)(a1 + 24),
            **(_QWORD **)(a1 + 32),
            v30,
            v31,
            v33,
            v35,
            **(_QWORD **)(a1 + 56),
            0LL,
            &v41);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v10);
      v13 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
      }
      v14 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      }
      v15 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return v3;
    }
  }
  v42 = 0LL;
  v20 = v41;
  v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(
         v41,
         v11,
         v12);
  if ( (v3 & 0x80000000) != 0
    || (v3 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v20)[8])(v20, &v42),
        (v3 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v3);
    v26 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
    }
    v28 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
    }
    v29 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return v3;
  }
  v21 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[2])(v22);
  }
  v23 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
  }
  v24 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return 0LL;
}
