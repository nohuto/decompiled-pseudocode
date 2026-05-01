/*
 * XREFs of ??0?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBU01@@Z @ 0x1801BDA34
 * Callers:
 *     _lambda_3e6690ebfd5912eedaaffd7303d678cc_::_lambda_3e6690ebfd5912eedaaffd7303d678cc_ @ 0x1802336B8 (_lambda_3e6690ebfd5912eedaaffd7303d678cc_--_lambda_3e6690ebfd5912eedaaffd7303d678cc_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
