/*
 * XREFs of ??R_lambda_949de2b926fa2a3cc50f06471a2a2214_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x1806F9BB0
 * Callers:
 *     _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator() @ 0x18025C2B0 (_lambda_3af96972622813cad57e0b9ae8d4dbe0_--operator().c)
 * Callees:
 *     ?CreateWatcher@?$consume_Windows_Devices_Enumeration_IDeviceInformationStatics@UIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806FA274 (-CreateWatcher@-$consume_Windows_Devices_Enumeration_IDeviceInformationStatics@UIDeviceInformati.c)
 */

__int64 __fastcall _lambda_949de2b926fa2a3cc50f06471a2a2214_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformationStatics<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>::CreateWatcher(
    a3,
    a2,
    *a1);
  return a2;
}
