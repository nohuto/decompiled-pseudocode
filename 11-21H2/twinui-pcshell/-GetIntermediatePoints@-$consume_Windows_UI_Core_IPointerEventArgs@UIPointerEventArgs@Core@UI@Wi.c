/*
 * XREFs of ?GetIntermediatePoints@?$consume_Windows_UI_Core_IPointerEventArgs@UIPointerEventArgs@Core@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVector@UPointerPoint@Input@UI@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18058E6A0
 * Callers:
 *     _lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CA54 (_lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Core_IPointerEventArgs<winrt::Windows::UI::Core::IPointerEventArgs>::GetIntermediatePoints(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
