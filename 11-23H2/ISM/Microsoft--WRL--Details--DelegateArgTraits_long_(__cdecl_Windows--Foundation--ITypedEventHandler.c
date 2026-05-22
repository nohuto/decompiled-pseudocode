/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::_)(Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___ @ 0x180059970
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___ @ 0x18005988C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Devices--Lights--Inter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::___Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___(
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
  *(_QWORD *)a1 = &off_1801FD660;
  return a1;
}
