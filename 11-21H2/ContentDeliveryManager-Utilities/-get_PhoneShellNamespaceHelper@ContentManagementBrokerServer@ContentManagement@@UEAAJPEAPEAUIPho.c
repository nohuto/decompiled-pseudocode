/*
 * XREFs of ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x18004A050
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EFF0 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_PhoneShellNamespaceHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IPhoneShellNamespaceHelper **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  _QWORD *v12; // rdi
  void *v13; // rcx
  int v14; // eax
  void *v15; // rcx
  void *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned __int16 v18; // [rsp+48h] [rbp+28h] BYREF
  void *v19; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v18, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 113LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x433,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !(_BYTE)v18 )
  {
    v5 = -2147024891;
    v6 = 2147942405LL;
    v7 = 114LL;
    goto LABEL_5;
  }
  v19 = 0LL;
  v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x436,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return (unsigned int)v11;
  }
  v12 = v9 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 1));
  v10[8] = 1LL;
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::`vftable'{for `IInspectable'};
  *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IPhoneShellNamespaceHelper>'};
  v10[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::`vftable'{for `IWeakReferenceSource'};
  v10[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IPhoneShellNamespaceHelper>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v10 = &ContentManagement::PhoneShellNamespaceHelper::`vftable'{for `IInspectable'};
  *v12 = &ContentManagement::PhoneShellNamespaceHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IPhoneShellNamespaceHelper>'};
  v10[5] = &ContentManagement::PhoneShellNamespaceHelper::`vftable'{for `IWeakReferenceSource'};
  v10[6] = &ContentManagement::PhoneShellNamespaceHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IPhoneShellNamespaceHelper>'};
  v11 = ContentManagement::PhoneShellNamespaceHelper::QueryInterface(
          (__int64)v10,
          &GUID_66fbdb55_757a_4e3a_975d_ad5f9afbd372,
          &v19);
  (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  if ( v11 < 0 )
    goto LABEL_12;
  v14 = (**(__int64 (__fastcall ***)(void *, GUID *, struct ContentManagement::IPhoneShellNamespaceHelper **))v19)(
          v19,
          &GUID_66fbdb55_757a_4e3a_975d_ad5f9afbd372,
          a2);
  v5 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x437,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14);
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v5;
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
