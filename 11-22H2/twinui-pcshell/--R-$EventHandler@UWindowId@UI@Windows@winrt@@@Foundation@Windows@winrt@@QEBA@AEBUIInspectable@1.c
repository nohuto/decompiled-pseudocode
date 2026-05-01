/*
 * XREFs of ??R?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBUWindowId@UI@23@@Z @ 0x1807254EC
 * Callers:
 *     ??$invoke@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@impl@winrt@@YA_NAEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBUWindowsTracker@implementation@Shell@Internal@41@AEBUWindowId@UI@41@@Z @ 0x1807251B4 (--$invoke@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker.c)
 *     ?Invoke@?$delegate@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_e9b2df4587691f5e0f4a189866728830_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_UI_WindowId@23@@Z @ 0x180725810 (-Invoke@-$delegate@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@V_lamb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
