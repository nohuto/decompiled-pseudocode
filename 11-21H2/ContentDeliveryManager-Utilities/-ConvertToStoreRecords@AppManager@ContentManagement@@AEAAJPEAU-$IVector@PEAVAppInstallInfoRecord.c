/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x1800883C0
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18008FF90 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v9; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int i; // esi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  HRESULT v21; // eax
  HSTRING v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // [rsp+20h] [rbp-60h]
  APTTYPE pAptType[2]; // [rsp+28h] [rbp-58h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v47; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v48; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-38h] BYREF
  __int64 v50; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a3 = 0LL;
  v44 = 0LL;
  v5 = 0;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[4] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    v7[5] = 0LL;
    *((_DWORD *)v7 + 12) = 0;
    v7[7] = 0LL;
    ApartmentType = CoGetApartmentType(pAptType, pAptQualifier);
    v9 = pAptType[0];
    if ( ApartmentType < 0 )
      v9 = APTTYPE_MTA;
    pAptType[0] = v9;
    if ( v9 == APTTYPE_MAINSTA || v9 == APTTYPE_STA )
    {
      *((_DWORD *)v7 + 18) = 1;
      *((_DWORD *)v7 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v7 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v7 + 10);
    }
    *((_DWORD *)v7 + 22) = 0;
    *((_DWORD *)v7 + 24) = 0;
    v44 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v5);
    if ( v44 )
      (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
    return (unsigned int)v5;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v49);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v11);
    if ( v44 )
      (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
    return v12;
  }
  for ( i = 0; i < v49; ++i )
  {
    *(_QWORD *)pAptType = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, APTTYPE *))(*(_QWORD *)a2 + 48LL))(a2, i, pAptType);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v14);
      v43 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v47 = 0LL;
    v15 = *(_QWORD *)pAptType;
    v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)pAptType + 48LL);
    WindowsDeleteString(0LL);
    v47 = 0LL;
    v17 = v16(v15, &v47);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v17);
      WindowsDeleteString(v47);
      v47 = 0LL;
      v42 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v48 = 0LL;
    v18 = *(_QWORD *)pAptType;
    v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)pAptType + 64LL);
    WindowsDeleteString(0LL);
    v48 = 0LL;
    v20 = v19(v18, &v48);
    v12 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v20);
      WindowsDeleteString(v48);
      v48 = 0LL;
      WindowsDeleteString(v47);
      v47 = 0LL;
      v41 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    *(_QWORD *)pAptQualifier = 0LL;
    string = 0LL;
    v21 = WindowsCreateStringReference(
            L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
            0x4Du,
            &hstringHeader,
            &string);
    if ( v21 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      JUMPOUT(0x180088D52LL);
    }
    v22 = string;
    v23 = *(_QWORD *)pAptQualifier;
    if ( *(_QWORD *)pAptQualifier )
    {
      *(_QWORD *)pAptQualifier = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    *(_QWORD *)pAptQualifier = 0LL;
    v12 = RoActivateInstance(v22, &v50);
    if ( (v12 & 0x80000000) == 0 )
    {
      if ( *(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v24 = v50;
        *(_QWORD *)pAptQualifier = v50;
        goto LABEL_33;
      }
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, APTTYPEQUALIFIER *))v50)(
              v50,
              &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
              pAptQualifier);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v24 = *(_QWORD *)pAptQualifier;
LABEL_33:
    if ( (v12 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)v12);
      v39 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      WindowsDeleteString(v48);
      v48 = 0LL;
      WindowsDeleteString(v47);
      v47 = 0LL;
      v40 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v25 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v24 + 56LL))(v24, v47);
    v12 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v25);
      v37 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      WindowsDeleteString(v48);
      v48 = 0LL;
      WindowsDeleteString(v47);
      v47 = 0LL;
      v38 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**(_QWORD **)pAptQualifier + 104LL))(
            *(_QWORD *)pAptQualifier,
            v48);
    v12 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v26);
      v35 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      WindowsDeleteString(v48);
      v48 = 0LL;
      WindowsDeleteString(v47);
      v47 = 0LL;
      v36 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v27 = *v44;
    v28 = *(_QWORD *)pAptQualifier;
    *(_QWORD *)pAptQualifier = 0LL;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v27 + 104))(v44, v28);
    v12 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v29);
      v33 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      WindowsDeleteString(v48);
      v48 = 0LL;
      WindowsDeleteString(v47);
      v47 = 0LL;
      v34 = *(_QWORD *)pAptType;
      if ( *(_QWORD *)pAptType )
      {
        *(_QWORD *)pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      if ( v44 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      return v12;
    }
    v30 = *(_QWORD *)pAptQualifier;
    if ( *(_QWORD *)pAptQualifier )
    {
      *(_QWORD *)pAptQualifier = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    WindowsDeleteString(v48);
    v48 = 0LL;
    WindowsDeleteString(v47);
    v47 = 0LL;
    v31 = *(_QWORD *)pAptType;
    if ( *(_QWORD *)pAptType )
    {
      *(_QWORD *)pAptType = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  v32 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v44 + 64LL))(v44, a3);
  v12 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v32);
    if ( v44 )
      (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
    return v12;
  }
  if ( v44 )
    (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
  return 0LL;
}
