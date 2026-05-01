/*
 * XREFs of _lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator() @ 0x1805F9A40
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___::Invoke @ 0x1805FAB90 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805FAB90.c)
 * Callees:
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051B8C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180051BE0 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x180051C18 (-IsSwitchItemVisibleOnDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDe.c)
 *     ?CurrentVirtualDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051C64 (-CurrentVirtualDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPe.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator()(__int64 *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a2;
  v5 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>::CurrentVirtualDesktop(
         a1 + 1,
         v7);
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
         a3,
         &v9);
  LODWORD(v8) = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>::IsSwitchItemVisibleOnDesktop(
                  a1,
                  v6,
                  v5) == 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    (unsigned int *)&v8);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v7[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
}
