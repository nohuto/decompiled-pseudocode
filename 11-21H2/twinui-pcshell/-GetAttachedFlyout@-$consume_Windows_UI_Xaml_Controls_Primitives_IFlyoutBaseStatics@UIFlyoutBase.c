/*
 * XREFs of ?GetAttachedFlyout@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@3@AEBUFrameworkElement@7893@@Z @ 0x1805B8D38
 * Callers:
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@2@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805B764C (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9AB0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::GetAttachedFlyout(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
