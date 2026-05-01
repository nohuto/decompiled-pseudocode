/*
 * XREFs of ??0DashboardActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800889DC
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800883D0 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::DashboardActivator(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  v2 = *(_DWORD **)(wil::details::static_lazy<DashboardManagerTelemetry>::get(
                      1LL,
                      _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_180876472, 0, 0, 2u, &v4);
  return this;
}
