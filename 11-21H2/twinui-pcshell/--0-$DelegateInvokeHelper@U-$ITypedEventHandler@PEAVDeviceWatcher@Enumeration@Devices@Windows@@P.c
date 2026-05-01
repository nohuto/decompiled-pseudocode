/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformationUpdate@234@@Foundation@Windows@@V_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformationUpdate@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_@@@Z @ 0x180065C20
 * Callers:
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180065954 (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformationUpdate *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>(
        __int64 a1,
        _OWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformationUpdate *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>::`vftable';
  return a1;
}
