/*
 * XREFs of ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180026F2C
 * Callers:
 *     ??1?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180026E2C (--1-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardActivator___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardActivator____::_1_::dtor$1 @ 0x180215353 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell.c)
 *     ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805BCD24 (--_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this)
{
  char *v1; // rbx
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  v1 = (char *)this + 16;
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  v2 = *(_DWORD **)(wil::details::static_lazy<DashboardManagerTelemetry>::get(
                      this,
                      _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_1806CC2D8, 0, 0, 2u, &v3);
  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)v1);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
