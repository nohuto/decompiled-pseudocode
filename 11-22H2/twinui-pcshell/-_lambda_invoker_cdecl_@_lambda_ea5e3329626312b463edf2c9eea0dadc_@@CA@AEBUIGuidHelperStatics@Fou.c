/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_ea5e3329626312b463edf2c9eea0dadc_@@CA@AEBUIGuidHelperStatics@Foundation@Windows@winrt@@@Z @ 0x1803F1C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

const struct winrt::Windows::Foundation::IGuidHelperStatics *__fastcall _lambda_ea5e3329626312b463edf2c9eea0dadc_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IGuidHelperStatics *a1,
        _QWORD *a2)
{
  signed int v3; // eax

  *(_OWORD *)a1 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, const struct winrt::Windows::Foundation::IGuidHelperStatics *))(*(_QWORD *)*a2 + 48LL))(
         *a2,
         a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a1;
}
