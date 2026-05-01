/*
 * XREFs of ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180065954
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194__&_::Run @ 0x180065920 (wil--details--functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformationUpdate@234@@Foundation@Windows@@V_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformationUpdate@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_@@@Z @ 0x180065C20 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@P.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformation@234@@Foundation@Windows@@V_lambda_56008a67ac3c8425e2b06e425c0b3f19_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformation@Enumeration@Devices@Windows@@PEAUIDeviceInformation@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_56008a67ac3c8425e2b06e425c0b3f19_@@@Z @ 0x180065C98 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devic_ea_180065C98.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::StartWatching(
        TwinUI::Lighting::AssistantLightManager *this)
{
  __int64 v2; // rbx
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, char *); // rdi
  _QWORD *v7; // r15
  void *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  void *v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // esi
  void *v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  int v19; // r14d
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v23 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Devices.Enumeration.DeviceInformation",
    0x2Eu,
    0x2Du);
  v2 = v25;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_c17f100e_3a46_4a78_8013_769dc9b97390, &v23);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v22 = 68LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v23);
    goto LABEL_20;
  }
  v5 = v23;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v23 + 112LL);
  v7 = (_QWORD *)((char *)this + 72);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.InterfaceClassGuid:=\"{4D1E55B2-F16F-11CF-88CB-001111000030}\" AND System.Devices.InterfaceEnabled:=S"
     "ystem.StructuredQueryType.Boolean#True AND System.DeviceInterface.Hid.UsagePage:=89 AND System.DeviceInterface.Hid.UsageId:=1",
    0xF0u,
    0xEFu);
  ActivationFactory = v6(v5, v25, (char *)this + 72);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v22 = 69LL;
    goto LABEL_23;
  }
  hstringHeader.Reserved.Reserved1 = this;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceAdded;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformation *,Windows::Devices::Enumeration::IDeviceInformation *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>(
           v8,
           &hstringHeader);
  else
    v9 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 48LL))(*v7, v9, (char *)this + 80);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v10,
      v23);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v11;
  }
  else
  {
    hstringHeader.Reserved.Reserved1 = this;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceRemoved;
    v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
      v13 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformationUpdate *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>(
              v12,
              &hstringHeader);
    else
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 80LL))(*v7, v13, (char *)this + 88);
    v15 = v14;
    if ( v14 >= 0 )
    {
      hstringHeader.Reserved.Reserved1 = this;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceUpdated;
      v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v16 )
        v17 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformationUpdate *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>(
                v16,
                &hstringHeader);
      else
        v17 = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 64LL))(*v7, v17, (char *)this + 96);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E,
          (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
          (const char *)(unsigned int)v18,
          v23);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( !v9 )
          goto LABEL_41;
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 136LL))(*v7);
        v19 = v20;
        if ( v20 >= 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          v4 = 0;
          goto LABEL_20;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50,
          (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
          (const char *)(unsigned int)v20,
          v23);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( !v9 )
        {
LABEL_41:
          v4 = v19;
          goto LABEL_20;
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      goto LABEL_41;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v14,
      v23);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v15;
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v4;
}
