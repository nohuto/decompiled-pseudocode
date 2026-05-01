/*
 * XREFs of ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806FAFC4
 * Callers:
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1806FB770 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806FC390 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3af96972622813cad57e0b9ae8d4dbe0___ @ 0x18025C178 (winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--Devices--Enumeration-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806F7B5C (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     ??R_lambda_2bdf1dccac8f31331c29d81ee6552535_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x1806F9B88 (--R_lambda_2bdf1dccac8f31331c29d81ee6552535_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Dev.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v4; // eax
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  _BYTE *v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+78h] [rbp+20h]

  v7 = 0LL;
  v2 = (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 456);
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 57, &v7) )
  {
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v5,
      L"(System.Devices.DevObjectType:=5 AND System.Devices.Aep.ProtocolId:=\"{0407d24e-53de-4c9a-9ba1-9ced54641188}\" AND"
       " System.Devices.WiFiDirect.Services:~=\"Miracast\") OR(System.Devices.DevObjectType:=8 AND System.Devices.Interfa"
       "ceClassGuid:=\"{E6F07B5F-EE97-4a90-B076-33F57BF4EAA7}\" AND System.Devices.InterfaceEnabled:=System.StructuredQue"
       "ryType.Boolean#True)",
      354);
    v8 = v5;
    v9 = &qword_180990D28;
    _InterlockedIncrement64(&qword_180990D28);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics> )
    {
      _lambda_2bdf1dccac8f31331c29d81ee6552535_::operator()(
        &v8,
        (__int64)&v6,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>);
      _InterlockedDecrement64(&qword_180990D28);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990D28);
      winrt::impl::factory_cache_entry<winrt::Windows::Devices::Enumeration::DeviceInformation,winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>::call<_lambda_2bdf1dccac8f31331c29d81ee6552535_ &>(
        v3,
        (__int64)&v6,
        &v8);
    }
    winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v6);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3af96972622813cad57e0b9ae8d4dbe0___(
      &v7,
      (__int64)this);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v2 + 48LL))(*(_QWORD *)v2, v7);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  }
}
