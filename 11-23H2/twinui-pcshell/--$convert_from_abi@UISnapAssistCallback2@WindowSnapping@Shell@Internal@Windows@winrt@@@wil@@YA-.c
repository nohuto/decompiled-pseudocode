/*
 * XREFs of ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18068782C
 * Callers:
 *     __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch$19 @ 0x180687C4B (__lambda_017e4516d3db66192a06ba57bc482270_--operator()_--_1_--catch$19.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x18076F9B0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180788F0C (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>, a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a1;
}
