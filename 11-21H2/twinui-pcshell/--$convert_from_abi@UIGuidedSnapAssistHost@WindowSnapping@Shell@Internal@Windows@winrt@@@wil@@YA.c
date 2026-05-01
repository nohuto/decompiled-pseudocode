/*
 * XREFs of ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18059AE90
 * Callers:
 *     _lambda_257868cc277a89cd587da3eed8fcd545_::operator() @ 0x1801BE6D8 (_lambda_257868cc277a89cd587da3eed8fcd545_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>, a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a1;
}
