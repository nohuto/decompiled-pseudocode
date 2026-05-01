/*
 * XREFs of ??R?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemWindowAddedEventArgs@Shell@Internal@23@@Z @ 0x18070F1D0
 * Callers:
 *     ??$invoke@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemWindowAddedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemWindowAddedEventArgs@7841@@Z @ 0x18070BF5C (--$invoke@U-$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Found.c)
 *     ?Invoke@?$delegate@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_067ec44aecba58403bd18f0f3596c7fa_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180714100 (-Invoke@-$delegate@U-$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::operator()(
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
