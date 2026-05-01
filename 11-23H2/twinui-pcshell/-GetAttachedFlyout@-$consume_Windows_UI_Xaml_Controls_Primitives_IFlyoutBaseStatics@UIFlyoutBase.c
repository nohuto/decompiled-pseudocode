/*
 * XREFs of ?GetAttachedFlyout@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFrameworkElement@Xaml@UI@Windows@3@@Z @ 0x18068F32C
 * Callers:
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?A_PAEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x18068D668 (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 *     ??R_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@QEBA@AEBUIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z @ 0x18068E9C8 (--R_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@QEBA@AEBUIFlyoutBaseStatics@Primitives@Controls@Xa.c)
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1806906B0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::GetAttachedFlyout(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
