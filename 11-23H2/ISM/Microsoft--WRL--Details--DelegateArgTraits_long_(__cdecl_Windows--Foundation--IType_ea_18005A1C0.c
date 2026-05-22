/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::_)(Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::Invoke @ 0x18005A1C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0b51ff8d1905919b0baadac0918cf5fb_::operator() @ 0x180059B08 (_lambda_0b51ff8d1905919b0baadac0918cf5fb_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800C1CF8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::___Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::Invoke(
        __int64 a1,
        RTL_SRWLOCK *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_0b51ff8d1905919b0baadac0918cf5fb_::operator()((RTL_SRWLOCK **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
