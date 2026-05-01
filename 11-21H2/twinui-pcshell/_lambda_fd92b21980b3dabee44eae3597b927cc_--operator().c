/*
 * XREFs of _lambda_fd92b21980b3dabee44eae3597b927cc_::operator() @ 0x18005127C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fd92b21980b3dabee44eae3597b927cc___::Invoke @ 0x1800511C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1800511C0.c)
 * Callees:
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051B8C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180051BE0 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x180051C18 (-IsSwitchItemVisibleOnDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDe.c)
 *     ?CurrentVirtualDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051C64 (-CurrentVirtualDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPe.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_fd92b21980b3dabee44eae3597b927cc_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  char IsSwitchItemVisibleOnDesktop; // bl
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v10; // [rsp+58h] [rbp+10h]
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+60h] [rbp+18h]
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>::CurrentVirtualDesktop(
         a1 + 8,
         &v12);
  v7 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
         a3,
         &v9);
  IsSwitchItemVisibleOnDesktop = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>::IsSwitchItemVisibleOnDesktop(
                                   a1,
                                   v7,
                                   v6);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  LODWORD(v9) = IsSwitchItemVisibleOnDesktop == 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    &v9);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
