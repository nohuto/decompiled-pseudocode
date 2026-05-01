/*
 * XREFs of ??$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18078AC20
 * Callers:
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x18078B798 (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078AD74 (--$_Uninitialized_move@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$a.c)
 *     ?_Change_array@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@_K1@Z @ 0x18078C0F0 (-_Change_array@-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$all.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Emplace_reallocate<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  winrt::Windows::Foundation::IUnknown *v12; // rax
  winrt::Windows::Foundation::IUnknown *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  winrt::Windows::Foundation::IUnknown *v16; // r8
  __int64 v17; // rcx
  char *result; // rax
  winrt::Windows::Foundation::IUnknown *v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+20h] [rbp-48h]
  winrt::Windows::Foundation::IUnknown *v21; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (winrt::Windows::Foundation::IUnknown *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = (char *)v12 + 8 * v5;
  try
  {
    *(_QWORD *)v14 = *a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v14);
    v21 = (winrt::Windows::Foundation::IUnknown *)v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>(v17, a2, v13);
      v21 = v13;
      v16 = (winrt::Windows::Foundation::IUnknown *)(v14 + 8);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>(v17, v15, v16);
    std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Change_array(
      a1,
      v13,
      v8,
      v7,
      v19);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
      v21,
      (winrt::Windows::Foundation::IUnknown *)(v14 + 8));
    std::_Deallocate<16,0>(v20, 8 * v7);
    throw;
  }
  return result;
}
