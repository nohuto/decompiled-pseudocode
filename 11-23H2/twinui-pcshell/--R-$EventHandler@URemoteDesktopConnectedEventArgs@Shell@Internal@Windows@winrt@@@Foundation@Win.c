/*
 * XREFs of ??R?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteDesktopConnectedEventArgs@Shell@Internal@23@@Z @ 0x1807207AC
 * Callers:
 *     ??$invoke@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSessionWindowManager@implementation@Shell@Internal@34@URemoteDesktopConnectedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSessionWindowManager@implementation@Shell@Internal@41@AEBURemoteDesktopConnectedEventArgs@7841@@Z @ 0x18071F244 (--$invoke@U-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Founda.c)
 *     ?Invoke@?$delegate@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_ea07a5f018953ad2ff3189abd97fd978_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180721920 (-Invoke@-$delegate@U-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>::operator()(
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
