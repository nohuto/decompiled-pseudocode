/*
 * XREFs of ??0?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18078AF1C
 * Callers:
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x18078BA30 (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?_Buy_nonzero@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_K@Z @ 0x1803EB288 (-_Buy_nonzero@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0 (--$_Destroy_range@V-$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@.c)
 */

winrt::Windows::Foundation::IUnknown **__fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        winrt::Windows::Foundation::IUnknown **a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbp
  _QWORD *v6; // rsi
  winrt::Windows::Foundation::IUnknown *v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(a2[1] - *a2) >> 3;
  if ( v4 )
  {
    std::vector<unsigned short *>::_Buy_nonzero(a1, v4);
    v5 = (_QWORD *)a2[1];
    v6 = (_QWORD *)*a2;
    v7 = *a1;
    while ( v6 != v5 )
    {
      *(_QWORD *)v7 = *v6;
      winrt::Windows::Foundation::IUnknown::add_ref(v7);
      v7 = (winrt::Windows::Foundation::IUnknown *)((char *)v7 + 8);
      ++v6;
    }
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(v7, v7);
    a1[1] = v7;
  }
  return a1;
}
