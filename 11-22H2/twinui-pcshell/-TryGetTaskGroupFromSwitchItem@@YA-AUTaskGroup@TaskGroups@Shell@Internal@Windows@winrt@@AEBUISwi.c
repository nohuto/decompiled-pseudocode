/*
 * XREFs of ?TryGetTaskGroupFromSwitchItem@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@456@@Z @ 0x1801B87E4
 * Callers:
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 * Callees:
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall TryGetTaskGroupFromSwitchItem(_QWORD *a1, __int64 *a2)
{
  void (__fastcall ***v3)(_QWORD, void *, _QWORD **); // rcx
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v3 = (void (__fastcall ***)(_QWORD, void *, _QWORD **))*winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
                                                            a2,
                                                            &v6);
  if ( v3 )
  {
    v5 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>, &v5);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
