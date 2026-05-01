/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3af96972622813cad57e0b9ae8d4dbe0___ @ 0x18025C178
 * Callers:
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806FAFC4 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3af96972622813cad57e0b9ae8d4dbe0___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[1] = a2;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v5 + 4) = 1;
  *v5 = off_1807CA988;
  *a1 = v5;
  return a1;
}
