/*
 * XREFs of ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0
 * Callers:
 *     _std::vector_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_std::allocator_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::_Emplace_reallocate_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_const_&__::_1_::catch$2 @ 0x18078AD36 (_std--vector_winrt--Windows--Internal--ComposableShell--Multitasking--ISwitchItem_std--allocator.c)
 *     ??$_Uninitialized_move@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078AD74 (--$_Uninitialized_move@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$a.c)
 *     ??0?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18078AF1C (--0-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@UISwi.c)
 *     ?_Change_array@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@_K1@Z @ 0x18078C0F0 (-_Change_array@-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$all.c)
 *     ?_Tidy@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18078C164 (-_Tidy@-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@U.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
