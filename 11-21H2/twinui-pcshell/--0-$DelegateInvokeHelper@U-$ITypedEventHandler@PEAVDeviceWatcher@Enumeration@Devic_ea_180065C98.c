/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformation@234@@Foundation@Windows@@V_lambda_56008a67ac3c8425e2b06e425c0b3f19_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformation@Enumeration@Devices@Windows@@PEAUIDeviceInformation@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_56008a67ac3c8425e2b06e425c0b3f19_@@@Z @ 0x180065C98
 * Callers:
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180065954 (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformation *,Windows::Devices::Enumeration::IDeviceInformation *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>(
        __int64 a1,
        _OWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformation *,Windows::Devices::Enumeration::IDeviceInformation *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>::`vftable';
  return a1;
}
