/*
 * XREFs of ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180156294
 * Callers:
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x180058044 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010452C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x1801520F8 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___ @ 0x1801529B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801529B0.c)
 *     ?IsMultiUserSKU@@YA_NXZ @ 0x18015511C (-IsMultiUserSKU@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AtmosCheck::RegisterForUserWatcherNotifications(AtmosCheck *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  _QWORD *v5; // r14
  int ActivationFactory; // eax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 (__fastcall *v9)(__int64 *, char *); // rdi
  LPVOID v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  void **v14; // [rsp+20h] [rbp-50h] BYREF
  void *v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( IsMultiUserSKU() )
  {
    v16[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16);
    v15 = 0LL;
    v14 = &v15;
    v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
    v3 = Microsoft::WRL::AsWeak<IInspectable>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB6,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v3);
LABEL_19:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v16);
      return v4;
    }
    v5 = (_QWORD *)((char *)this + 248);
    if ( !*((_QWORD *)this + 31) )
    {
      v14 = 0LL;
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.System.User", 0x14u, 0x13u);
      ActivationFactory = RoGetActivationFactory(v18, &GUID_155eb23b_242a_45e0_a2e9_3171fc6a7fdd, &v14);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v7 = 3004LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_18:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
        goto LABEL_19;
      }
      v8 = (__int64 *)v14;
      v9 = (__int64 (__fastcall *)(__int64 *, char *))*((_QWORD *)*v14 + 6);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 31);
      ActivationFactory = v9(v8, (char *)this + 248);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v7 = 3005LL;
        goto LABEL_9;
      }
      hstringHeader.Reserved.Reserved1 = v15;
      if ( v15 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 8LL))(v15);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
      v10 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10 )
        v11 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___(
                (__int64)v10,
                &hstringHeader);
      else
        v11 = 0LL;
      v16[1] = v11;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&hstringHeader);
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v5 + 72LL))(*v5, v11, (char *)this + 256);
      v4 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD6,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v12);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        goto LABEL_18;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 56LL))(*v5);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v16);
  }
  else
  {
    *((_BYTE *)this + 264) = 1;
  }
  return 0LL;
}
