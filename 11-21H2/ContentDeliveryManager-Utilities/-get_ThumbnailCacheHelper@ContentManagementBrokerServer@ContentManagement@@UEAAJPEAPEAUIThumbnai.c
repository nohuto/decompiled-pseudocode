/*
 * XREFs of ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x18004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IThumbnailCacheHelper **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  const unsigned __int16 *const *v7; // rdx
  CreativeFramework::LockScreenCategoryConfig *v8; // rcx
  int IsCallerInAllowedAppList; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // [rsp+48h] [rbp+28h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp+30h]
  _QWORD *v19; // [rsp+58h] [rbp+38h]

  *a2 = 0LL;
  v17 = 0LL;
  v3 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v18 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **)))(*v10)[2])(v10);
    }
    return (unsigned int)v5;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  v4[8] = 1LL;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IInspectable'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
  v4[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `IWeakReferenceSource'};
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v4 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IInspectable'};
  *v6 = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IThumbnailCacheHelper>'};
  v4[5] = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `IWeakReferenceSource'};
  v4[6] = &ContentManagement::ThumbnailCacheHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IThumbnailCacheHelper>'};
  v19 = v4;
  v18 = 0LL;
  IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(v8, v7);
  v5 = IsCallerInAllowedAppList;
  if ( IsCallerInAllowedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)IsCallerInAllowedAppList);
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))*v4)(v4, &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c, &v17);
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v5 < 0 )
    goto LABEL_8;
  v12 = (**v17)(v17, &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c, a2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **)))(*v15)[2])(v15);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12);
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **)))(*v14)[2])(v14);
    }
    return v13;
  }
}
