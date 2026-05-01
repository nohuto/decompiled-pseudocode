/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAVDeviceInformationUpdate@234@@Foundation@Windows@@V_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_@@$0?0PEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVDeviceInformationUpdate@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@234@@234@@Foundation@Windows@@EAAJPEAUIDeviceWatcher@Enumeration@Devices@3@PEAUIDeviceInformationUpdate@563@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003A580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::IDeviceWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Devices::Enumeration::DeviceInformationUpdate *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>>::*)(Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>,_lambda_6daaf3e22a1891bd5f0977291f8d7dfd_,-1,Windows::Devices::Enumeration::IDeviceWatcher *,Windows::Devices::Enumeration::IDeviceInformationUpdate *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
