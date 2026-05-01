/*
 * XREFs of ??RResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUDesktopSnapLayoutManager@12345@@Z @ 0x180683064
 * Callers:
 *     ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x180682354 (--$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktop.c)
 *     ?Invoke@?$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_2f694db03869fd8df1a58b7a10d320a2_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180684800 (-Invoke@-$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler::operator()(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
