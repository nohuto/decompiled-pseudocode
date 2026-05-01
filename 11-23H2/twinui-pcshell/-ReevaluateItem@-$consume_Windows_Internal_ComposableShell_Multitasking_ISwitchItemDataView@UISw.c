/*
 * XREFs of ?ReevaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180768144
 * Callers:
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x180768500 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateItem(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
