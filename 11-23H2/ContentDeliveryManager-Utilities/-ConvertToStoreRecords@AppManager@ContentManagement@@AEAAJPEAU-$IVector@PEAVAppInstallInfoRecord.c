/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18007F2F4
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180083FC0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@1@@Z @ 0x180079F14 (--$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     ??0?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@1234@Upermission@01234@@Z @ 0x18007D7C0 (--0-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  void *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int i; // esi
  __int64 (__fastcall *v12)(__int64, _QWORD, void **); // rbx
  int v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, HSTRING *); // rdi
  int v16; // eax
  void *v17; // rbx
  __int64 (__fastcall *v18)(void *, HSTRING *); // rdi
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  HSTRING v26; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string; // [rsp+28h] [rbp-58h] BYREF
  void *v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  v30 = 0LL;
  v5 = 0;
  v29 = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>((__int64)v6);
    v29 = v7;
    v28 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v28);
  if ( v7 )
  {
    v29 = 0LL;
    v30 = (__int64 *)v7;
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  if ( v5 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v31);
    v5 = v10;
    if ( v10 >= 0 )
    {
      for ( i = 0; i < v31; ++i )
      {
        v28 = 0LL;
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)a2 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        v13 = v12(a2, i, &v28);
        v5 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BF,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_32;
        }
        v26 = 0LL;
        v14 = v28;
        v15 = *(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)v28 + 48LL);
        WindowsDeleteString(0LL);
        v26 = 0LL;
        v16 = v15(v14, &v26);
        v5 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C1,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_30;
        }
        string = 0LL;
        v17 = v28;
        v18 = *(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)v28 + 64LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v19 = v18(v17, &string);
        v5 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C3,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v19);
          goto LABEL_28;
        }
        v29 = 0LL;
        v33 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
          0x4Eu,
          0x4Du);
        v20 = v33;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        v21 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
                v20,
                &v29);
        v5 = v21;
        if ( v21 < 0 )
        {
          v24 = 454LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v21);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
LABEL_28:
          WindowsDeleteString(string);
          string = 0LL;
LABEL_30:
          WindowsDeleteString(v26);
          v26 = 0LL;
LABEL_32:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          goto LABEL_36;
        }
        v21 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v29 + 56LL))(v29, v26);
        v5 = v21;
        if ( v21 < 0 )
        {
          v24 = 455LL;
          goto LABEL_26;
        }
        v21 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v29 + 104LL))(v29, string);
        v5 = v21;
        if ( v21 < 0 )
        {
          v24 = 456LL;
          goto LABEL_26;
        }
        v22 = *v30;
        v23 = v29;
        v29 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v22 + 104))(v30, v23);
        v5 = v21;
        if ( v21 < 0 )
        {
          v24 = 458LL;
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v26);
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      }
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v30 + 64))(v30, a3);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v5 = 0;
        goto LABEL_36;
      }
      v9 = 461LL;
    }
    else
    {
      v9 = 443LL;
    }
    v8 = (unsigned int)v10;
  }
  else
  {
    v8 = (unsigned int)v5;
    v9 = 440LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)v8);
LABEL_36:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  return (unsigned int)v5;
}
