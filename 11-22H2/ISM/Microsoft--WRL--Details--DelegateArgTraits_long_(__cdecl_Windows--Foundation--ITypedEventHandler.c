/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::_)(Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_9ed77799b713aee1828fcea8d6a76348___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_9ed77799b713aee1828fcea8d6a76348___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___ @ 0x1800620A0
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_9ed77799b713aee1828fcea8d6a76348___ @ 0x180061FBC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Devices--Lights--Inter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::___Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_9ed77799b713aee1828fcea8d6a76348___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_9ed77799b713aee1828fcea8d6a76348___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Lights::Internal::AmbientManager *,Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Lights::Internal::AmbientManager *,Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &off_18020A498;
  return a1;
}
