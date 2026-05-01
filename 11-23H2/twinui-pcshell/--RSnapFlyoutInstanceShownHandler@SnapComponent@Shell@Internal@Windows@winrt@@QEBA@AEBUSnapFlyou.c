/*
 * XREFs of ??RSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@_N@Z @ 0x18067A4D0
 * Callers:
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_9217de4eb6614e40c63f195e49db3d13_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x18067B5D0 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Win_ea_18067B5D0.c)
 *     ??$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@_N@impl@winrt@@YA_NAEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@AEB_N@Z @ 0x18068E3B4 (--$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyou.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::operator()(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
