/*
 * XREFs of ?NewForeground@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180079338
 * Callers:
 *     _lambda_38d97ac131026f2cd3c3fc9c49359ac8_::operator()_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_const_&_ @ 0x180078B80 (_lambda_38d97ac131026f2cd3c3fc9c49359ac8_--operator()_winrt--Windows--Internal--Shell--XamlExplo.c)
 *     ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x1806905B0 (-OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     _lambda_a8635596ed7ae5e31c94755e25628c9f_::operator() @ 0x18078CE98 (_lambda_a8635596ed7ae5e31c94755e25628c9f_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::NewForeground(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
