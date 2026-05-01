/*
 * XREFs of ?_Change_array@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@_K1@Z @ 0x18078C0F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18078AC20 (--$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@-$v.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0 (--$_Destroy_range@V-$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Foundation::IUnknown *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::Windows::Foundation::IUnknown **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
      v6,
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
