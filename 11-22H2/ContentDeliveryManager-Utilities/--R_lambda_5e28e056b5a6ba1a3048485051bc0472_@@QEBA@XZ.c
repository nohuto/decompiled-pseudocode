/*
 * XREFs of ??R_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEBA@XZ @ 0x18007E440
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180084460 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007A0C8 (--$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007BF90 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007FBB4 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_5e28e056b5a6ba1a3048485051bc0472_::operator()(__int64 a1)
{
  ContentManagement::AppManager *v2; // rbx
  int AppInstallManager; // eax
  int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v9; // eax
  __int64 (__fastcall *v10)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // r14
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // edx
  __int64 v13; // r8
  char v15; // [rsp+28h] [rbp-50h]
  char v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+30h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+38h] [rbp-40h]
  char v20; // [rsp+40h] [rbp-38h]
  char v21; // [rsp+40h] [rbp-38h]
  char v22; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+38h] BYREF
  _QWORD *v25; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+48h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v27; // [rsp+C8h] [rbp+50h] BYREF

  v27 = 0LL;
  v2 = *(ContentManagement::AppManager **)a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(v2, &v27);
  v4 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    v25 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v27,
           (__int64 *)&v25);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v24 = 0LL;
      v6 = v25;
      v7 = *v25;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
      {
        v10 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v7 + 64);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        v22 = 0;
        v21 = **(_BYTE **)(a1 + 48);
        v19 = **(_BYTE **)(a1 + 40);
        v17 = 0;
        v9 = v10(
               v6,
               *(_QWORD *)(*(_QWORD *)a1 + 80LL),
               **(_QWORD **)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               **(_QWORD **)(a1 + 24),
               **(_QWORD **)(a1 + 32),
               v17,
               v19,
               v21,
               v22,
               **(_QWORD **)(a1 + 56),
               0LL,
               &v24);
      }
      else
      {
        v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v7 + 56);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        v20 = 0;
        v18 = **(_BYTE **)(a1 + 48);
        v16 = **(_BYTE **)(a1 + 40);
        v15 = 0;
        v9 = v8(
               v6,
               **(_QWORD **)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               **(_QWORD **)(a1 + 24),
               **(_QWORD **)(a1 + 32),
               v15,
               v16,
               v18,
               v20,
               **(_QWORD **)(a1 + 56),
               0LL,
               &v24);
      }
      v4 = v9;
      if ( v9 >= 0 )
      {
        v26 = 0LL;
        v11 = v24;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(
               v11,
               v12,
               v13);
        if ( v4 >= 0 )
          v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v11)[8])(
                 v11,
                 &v26);
        if ( v4 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
          v4 = 0;
          goto LABEL_17;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x154,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v4);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x154,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v9);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x154,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x154,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  return (unsigned int)v4;
}
