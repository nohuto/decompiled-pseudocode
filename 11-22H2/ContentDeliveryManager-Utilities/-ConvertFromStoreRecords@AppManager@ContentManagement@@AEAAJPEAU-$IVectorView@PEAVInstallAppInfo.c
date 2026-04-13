/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18007EFBC
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180084010 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A67C (-InternalRelease@-$ComPtr@V-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@Targ.c)
 *     ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A6A4 (-InternalRelease@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18004BC40 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18004BCA0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x18007B8FC (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@.c)
 *     ??0?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@1234@Upermission@01234@@Z @ 0x18007D734 (--0-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppInsta.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x180081830 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x1800820E0 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v5; // rax
  __int64 v6; // rbx
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int View; // eax
  unsigned int i; // esi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v30; // [rsp+80h] [rbp+40h] BYREF
  void *v31; // [rsp+90h] [rbp+50h] BYREF
  HSTRING v32; // [rsp+98h] [rbp+58h] BYREF

  v30 = a1;
  *a3 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>::InternalRelease(&v28);
  v28 = 0LL;
  v5 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v31 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>((__int64)v5);
    v31 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v31);
  if ( v6 )
  {
    v28 = v6;
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 >= 0 )
  {
    View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v30);
    v7 = View;
    if ( View >= 0 )
    {
      for ( i = 0; i < (unsigned int)v30; ++i )
      {
        v26 = 0LL;
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        v13 = v12(a2, i, &v26);
        v7 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DE,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_35;
        }
        v32 = 0LL;
        v14 = v26;
        v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 48LL);
        WindowsDeleteString(0LL);
        v32 = 0LL;
        v16 = v15(v14, &v32);
        v7 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E1,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_33;
        }
        string = 0LL;
        v17 = v26;
        v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 96LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v19 = v18(v17, &string);
        v7 = v19;
        if ( v19 < 0 )
        {
          v23 = 484LL;
          goto LABEL_30;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v26 + 120LL))(v26, &v31);
        v7 = v19;
        if ( v19 < 0 )
        {
          v23 = 487LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v19);
          goto LABEL_31;
        }
        v27 = 0LL;
        Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v27);
        v20 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(&v27);
        v7 = v20;
        if ( v20 < 0 )
        {
          v22 = 490LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v27);
LABEL_31:
          WindowsDeleteString(string);
          string = 0LL;
LABEL_33:
          WindowsDeleteString(v32);
          v32 = 0LL;
LABEL_35:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          goto LABEL_39;
        }
        v20 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
                (ContentManagement::AppInstallInfoRecordImpl *)(v27 + 48),
                v32);
        v7 = v20;
        if ( v20 < 0 )
        {
          v22 = 491LL;
          goto LABEL_27;
        }
        v20 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
                (ContentManagement::AppInstallInfoRecordImpl *)(v27 + 48),
                string);
        v7 = v20;
        if ( v20 < 0 )
        {
          v22 = 492LL;
          goto LABEL_27;
        }
        *(_DWORD *)(v27 + 104) = (_DWORD)v31;
        LOBYTE(v21) = 1;
        v20 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
                v28,
                0LL,
                (v27 + 48) & -(__int64)(v27 != 0),
                v21);
        v7 = v20;
        if ( v20 < 0 )
        {
          v22 = 495LL;
          goto LABEL_27;
        }
        Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v27);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v32);
        v32 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
               v28,
               a3);
      v7 = View;
      if ( View >= 0 )
      {
        v7 = 0;
        goto LABEL_39;
      }
      v9 = 498LL;
    }
    else
    {
      v9 = 474LL;
    }
    v8 = (unsigned int)View;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 471LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)v8);
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>::InternalRelease(&v28);
  return (unsigned int)v7;
}
