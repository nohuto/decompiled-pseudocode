/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UIClassFactory@@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805BDB04
 * Callers:
 *     ?GetTrustLevel@?$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActivator@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805BD7F0 (-GetTrustLevel@-$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 16LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
