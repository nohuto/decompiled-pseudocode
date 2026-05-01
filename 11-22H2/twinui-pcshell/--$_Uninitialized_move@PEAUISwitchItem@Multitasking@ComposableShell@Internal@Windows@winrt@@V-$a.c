/*
 * XREFs of ??$_Uninitialized_move@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078AD74
 * Callers:
 *     ??$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18078AC20 (--$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@-$v.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0 (--$_Destroy_range@V-$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Uninitialized_move<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(a3, a3);
  return a3;
}
