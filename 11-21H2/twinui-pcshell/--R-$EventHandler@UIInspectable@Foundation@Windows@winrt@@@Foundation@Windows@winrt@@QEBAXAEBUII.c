/*
 * XREFs of ??R?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBUIInspectable@123@0@Z @ 0x180038584
 * Callers:
 *     ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@VListenerWindow@@UListenerWindowNotificationArgs@@@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x1800384C4 (--$invoke@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@VLi.c)
 *     ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T$$T@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEB$$T1@Z @ 0x1801A38D0 (--$invoke@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T.c)
 *     ?Invoke@?$delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_bdd03f877925d36d83d9de4a84c76bc9_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18039FCE0 (-Invoke@-$delegate@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundat_ea_18039FCE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>::operator()(
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
