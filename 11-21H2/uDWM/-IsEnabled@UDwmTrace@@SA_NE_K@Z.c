/*
 * XREFs of ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x18009D4E8
 * Callers:
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x18009C5AC (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x18009C810 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x18009D340 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18009D340.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18009D580 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x18009D6A0 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18009E190 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

char __fastcall UDwmTrace::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<UDwmTrace>::get(
                                      a1,
                                      _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1);
}
