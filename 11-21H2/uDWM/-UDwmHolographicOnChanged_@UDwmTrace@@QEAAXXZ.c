/*
 * XREFs of ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x18009DFA8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x18009D340 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18009D340.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18009E190 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicOnChanged_(UDwmTrace *this)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      this,
                      _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x2000000LL;
      v6 = 8;
      tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_18011E699, 0LL, 0LL, 3, (__int64)v4);
    }
  }
}
