/*
 * XREFs of ??$as@U?$IReference@I@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@I@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180504518
 * Callers:
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805045F4 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Foundation::IReference<unsigned int>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<unsigned int>>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
