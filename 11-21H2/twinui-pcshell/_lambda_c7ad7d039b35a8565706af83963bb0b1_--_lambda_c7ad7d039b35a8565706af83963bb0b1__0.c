/*
 * XREFs of _lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1__0 @ 0x1801C3EE8
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_c7ad7d039b35a8565706af83963bb0b1_::_lambda_c7ad7d039b35a8565706af83963bb0b1__0(
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
