/*
 * XREFs of __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch$19 @ 0x180687C4B
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18068782C (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x180688624 (-SnapAssistCompleted@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnap.c)
 */

__int64 __fastcall _lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x68,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
    a4);
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)(*(_QWORD *)(a2 + 96) + 40LL));
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
    (_QWORD *)(a2 + 48),
    *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(a2 + 72));
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    *(_OWORD *)(a2 + 160) = 0LL;
    *(_QWORD *)(a2 + 160) = 0LL;
    *(_DWORD *)(a2 + 168) = 0;
    *(_DWORD *)(a2 + 56) = 0;
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a2 + 160);
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
      a2 + 48,
      a2 + 56,
      a2 + 160);
    v5 = *(_QWORD *)(a2 + 48);
  }
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 48));
  return 0LL;
}
