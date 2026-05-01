/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformation@234@@Foundation@Windows@@V_lambda_56008a67ac3c8425e2b06e425c0b3f19_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformation@Enumeration@Devices@Windows@@PEAUIDeviceInformation@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformation@563@@Z@Details@WRL@Microsoft@@UEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@789@@Z @ 0x18055ED60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformation *,Windows::Devices::Enumeration::IDeviceInformation *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>,_lambda_56008a67ac3c8425e2b06e425c0b3f19_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformation *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
