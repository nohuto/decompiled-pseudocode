/*
 * XREFs of ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18005D92C
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800620C0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x18005D0B0 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180062CB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180062CB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::GetEventCacheIfNeeded(
        ContentManagement *this,
        const unsigned __int16 *a2,
        struct ContentManagement::ICreativeEventReportedCache **a3)
{
  __int64 v5; // rax
  char *v6; // rax
  char *v7; // rdi
  int Interface; // ebx
  _QWORD *v9; // rbx
  LPVOID *v10; // rsi
  int CreativeEventCacheRegPath; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *(_QWORD *)a2 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 8));
  *((_QWORD *)v7 + 8) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IInspectable'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IInspectable'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 6) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 9) = 0LL;
  v10 = (LPVOID *)(v7 + 96);
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  *((_QWORD *)v7 + 10) = -1LL;
  *((_QWORD *)v7 + 11) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (const unsigned __int16 *)this,
                                (unsigned __int16 **)v7 + 9);
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v12 = 207LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    goto LABEL_15;
  }
  if ( *v10 )
  {
    CoTaskMemFree(*v10);
    *v10 = 0LL;
  }
  *((_QWORD *)v7 + 13) = -1LL;
  *((_QWORD *)v7 + 14) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (const unsigned __int16 *)this,
                                (unsigned __int16 **)v7 + 12);
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v12 = 208LL;
    goto LABEL_13;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::QueryInterface(
                v7,
                &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                a2);
LABEL_15:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v7);
  if ( Interface < 0 )
    goto LABEL_16;
  return 0LL;
}
