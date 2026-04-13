/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180087C8C
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18008FF90 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180050880.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800512A0 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180051340 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180084F6C (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x18008C440 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18008CF00 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile signed __int64 *v8; // rcx
  int View; // ebx
  __int64 v11; // rdx
  volatile signed __int64 *v12; // rcx
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rcx
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rcx
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rcx
  volatile signed __int64 *v33; // rcx
  __int64 v34; // rcx
  volatile signed __int64 *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  volatile signed __int64 *v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-20h] BYREF
  HSTRING v43; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int64 *v45; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v47; // [rsp+80h] [rbp+40h] BYREF
  int v48; // [rsp+90h] [rbp+50h] BYREF
  volatile signed __int64 *v49; // [rsp+98h] [rbp+58h]

  v47 = a1;
  *a3 = 0LL;
  v49 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *v6 = &Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>::`vftable';
    v6[2] = &Windows::Foundation::Collections::IIterable<IInspectable *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 3));
    v7[8] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[9] = 0LL;
    *((_DWORD *)v7 + 20) = 0;
    v7[11] = 0LL;
    *((_DWORD *)v7 + 26) = 0;
    InitializeSRWLock((PSRWLOCK)v7 + 14);
    *((_DWORD *)v7 + 30) = 0;
    *((_DWORD *)v7 + 32) = 0;
    v49 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v5);
    v8 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v8);
    }
    return (unsigned int)v5;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v47);
  if ( View < 0 )
  {
    v11 = 453LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)View);
LABEL_13:
    v12 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v12);
    }
    return (unsigned int)View;
  }
  v13 = 0;
  if ( (_DWORD)v47 )
  {
    while ( 1 )
    {
      v42 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v13, &v42);
      View = v14;
      if ( v14 < 0 )
        break;
      v43 = 0LL;
      v15 = v42;
      v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 48LL);
      WindowsDeleteString(0LL);
      v43 = 0LL;
      v17 = v16(v15, &v43);
      View = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v17);
        WindowsDeleteString(v43);
        v43 = 0LL;
        v39 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        goto LABEL_13;
      }
      string = 0LL;
      v18 = v42;
      v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 96LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v20 = v19(v18, &string);
      View = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CF,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v20);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v38 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
        goto LABEL_13;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 120LL))(v42, &v48);
      View = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D2,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v21);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v37 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
        goto LABEL_13;
      }
      v45 = 0LL;
      v22 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(&v45);
      View = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v22);
        v35 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v35);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v36 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_13;
      }
      v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v45 + 6),
              v43);
      View = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v23);
        v33 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v33);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v34 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        goto LABEL_13;
      }
      v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v45 + 6),
              string);
      View = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v24);
        v31 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v31);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v32 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        goto LABEL_13;
      }
      *((_DWORD *)v45 + 26) = v48;
      LOBYTE(v25) = 1;
      v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v49,
              0LL,
              (unsigned __int64)(v45 + 6) & -(__int64)(v45 != 0LL),
              v25);
      View = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v26);
        v29 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v29);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v43);
        v43 = 0LL;
        v30 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        goto LABEL_13;
      }
      v27 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v27);
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v43);
      v43 = 0LL;
      v28 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( ++v13 >= (unsigned int)v47 )
        goto LABEL_30;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    v40 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    goto LABEL_13;
  }
LABEL_30:
  View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
           v49,
           a3);
  if ( View < 0 )
  {
    v11 = 477LL;
    goto LABEL_12;
  }
  v41 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v41);
  }
  return 0LL;
}
