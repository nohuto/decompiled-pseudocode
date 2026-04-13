/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18007FF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180073338 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-_ea_180073338.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080A00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180080A00.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180080FA4 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        _QWORD *a4)
{
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v7; // rdi
  wchar_t **v8; // rbx
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  const char *v11; // r9
  volatile signed __int64 *v12; // rbx
  int Interface; // edi
  _QWORD *v14; // rdi
  volatile signed __int64 *v15; // rcx
  __int64 result; // rax
  unsigned int v17; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-98h]
  unsigned int v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  void *v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  unsigned __int64 v23; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a4 = 0LL;
  v20 = 0LL;
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v7 = StringRawBuffer;
  v8 = &off_1801092D0;
  try
  {
    while ( 1 )
    {
      if ( v8 == (wchar_t **)&aProxyFileList )
      {
        v17 = wil::verify_hresult<long>(0x80070490);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          96LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\ActionFactory.h",
          (const char *)v17,
          bIgnoreCase);
      }
      if ( CompareStringOrdinal(*v8, -1, v7, -1, 1) == 2 )
        break;
      v8 += 2;
    }
    v9 = *((_DWORD *)v8 + 2);
    *a4 = 0LL;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v10;
    if ( v10 )
    {
      v14 = v10 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 1));
      *((_QWORD *)v12 + 8) = 1LL;
      *v12 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v12 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
      *v12 = (volatile signed __int64)&Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
      *v14 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 5) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v12 + 6) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *((_QWORD *)v12 + 9) = 0LL;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 11) = 0LL;
      *((_QWORD *)v12 + 12) = 0LL;
      *((_QWORD *)v12 + 11) = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
      Interface = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
                    v12,
                    v9,
                    &v20,
                    a3);
      v15 = v12;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
                      v12,
                      &GUID_e762b6be_f3b7_4977_bc20_4388a551b5b4,
                      a4);
        v15 = v12;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v15);
    }
    else
    {
      Interface = -2147024882;
    }
    if ( Interface < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        52LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
        (const char *)(unsigned int)Interface,
        bIgnoreCase);
    if ( v23 >= 8 )
      operator delete(v21);
    result = 0LL;
  }
  catch ( ... )
  {
    v19 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x36,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    if ( v23 >= 8 )
      operator delete(v21);
    return v19;
  }
  return result;
}
