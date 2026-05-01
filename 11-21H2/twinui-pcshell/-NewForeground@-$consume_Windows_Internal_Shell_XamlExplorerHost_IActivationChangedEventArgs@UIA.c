/*
 * XREFs of ?NewForeground@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1800133AC
 * Callers:
 *     _lambda_38d97ac131026f2cd3c3fc9c49359ac8_::operator()_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_const_&_ @ 0x18001167C (_lambda_38d97ac131026f2cd3c3fc9c49359ac8_--operator()_winrt--Windows--Internal--Shell--XamlExplo.c)
 *     _lambda_136c33c4afb22965c6bbfc180a837019_::operator() @ 0x180447A70 (_lambda_136c33c4afb22965c6bbfc180a837019_--operator().c)
 *     ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x1805B9A30 (-OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
