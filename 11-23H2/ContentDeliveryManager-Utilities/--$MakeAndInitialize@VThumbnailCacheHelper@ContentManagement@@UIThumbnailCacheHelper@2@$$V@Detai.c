/*
 * XREFs of ??$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailCacheHelper@ContentManagement@@@Z @ 0x1800277B8
 * Callers:
 *     ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x180044A50 (-get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnai.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B018 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180037E94 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ThumbnailCacheHelper,ContentManagement::IThumbnailCacheHelper,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // rdi
  const unsigned __int16 *const *v6; // rdx
  int v7; // r8d
  CreativeFramework::LockScreenCategoryConfig *v8; // rcx
  int IsCallerInAllowedAppList; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v13 = v2;
  if ( v2 )
  {
    v5 = v2 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 1));
    v3[8] = 1LL;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IInspectable'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
    v3[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IWeakReferenceSource'};
    v3[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v3 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IInspectable'};
    *v5 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
    v3[5] = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IWeakReferenceSource'};
    v3[6] = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
    v14 = v3;
    v13 = 0LL;
    IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(v8, v6, v7);
    v4 = IsCallerInAllowedAppList;
    if ( IsCallerInAllowedAppList >= 0 )
      v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v3)(
             v3,
             &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c,
             a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)IsCallerInAllowedAppList,
        v11);
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v13);
  return v4;
}
