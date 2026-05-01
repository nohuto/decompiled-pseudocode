/*
 * XREFs of ??R?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@QEBAXAEBUIWindowTabExtension@Shell@UI@Internal@23@AEBUWindowTabsChangedEventArgs@56723@@Z @ 0x180238978
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_9149871aec59121227803e9d8e93736d_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180578310 (-Invoke@-$delegate@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UW.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
