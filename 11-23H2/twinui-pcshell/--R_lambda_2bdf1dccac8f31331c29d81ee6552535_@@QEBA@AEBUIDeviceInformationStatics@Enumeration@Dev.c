/*
 * XREFs of ??R_lambda_2bdf1dccac8f31331c29d81ee6552535_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x1806F9B88
 * Callers:
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806FAFC4 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ?FindAllAsync@?$consume_Windows_Devices_Enumeration_IDeviceInformationStatics@UIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806FA334 (-FindAllAsync@-$consume_Windows_Devices_Enumeration_IDeviceInformationStatics@UIDeviceInformatio.c)
 */

__int64 __fastcall _lambda_2bdf1dccac8f31331c29d81ee6552535_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformationStatics<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>::FindAllAsync(
    a3,
    a2,
    *a1);
  return a2;
}
