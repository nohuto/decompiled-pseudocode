/*
 * XREFs of ?OnAppSnapped@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x1806882DC
 * Callers:
 *     _lambda_6853a53403c5e70a089bec5311ff3126_::operator() @ 0x180687D0C (_lambda_6853a53403c5e70a089bec5311ff3126_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::OnAppSnapped(
        __int64 **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = *v3;
  v6 = *a3;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(v4 + 72))(v3, a2, &v6);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
