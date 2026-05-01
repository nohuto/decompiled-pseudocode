/*
 * XREFs of ??$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@P87@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU8@@winrt@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@0@$$QEAPEAUIAppViewDataSourceAdapter@@$$QEAP86@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU7@@Z @ 0x180769528
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x18076CF90 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall ___capture_UISwitchItem_Multitasking_ComposableShell_Internal_Windows_winrt__PEAUIAppViewDataSourceAdapter__P87_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU8__winrt__YA_AUISwitchItem_Multitasking_ComposableShell_Internal_Windows_0___QEAPEAUIAppViewDataSourceAdapter____QEAP86_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU7__Z(
        _QWORD *a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD, void *, __int64 *),
        _QWORD *a4)
{
  signed int v5; // eax
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v5 = (*a3)(*a2, *a4, &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a1 = v7;
  return a1;
}
