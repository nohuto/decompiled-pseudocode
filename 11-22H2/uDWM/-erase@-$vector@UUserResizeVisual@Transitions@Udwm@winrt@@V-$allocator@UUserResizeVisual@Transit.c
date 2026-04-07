/*
 * XREFs of ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x180103E18
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x180102690 (-RemoveAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x180101174 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

winrt::Windows::Foundation::IUnknown **__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::erase(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown **a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rax
  winrt::Windows::Foundation::IUnknown *v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rax
  winrt::Windows::Foundation::IUnknown **result; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)((char *)a3 + 8);
  v8 = a3;
  while ( v4 != v3 )
  {
    v9 = (__int64 *)((char *)v8 + 8);
    if ( *(_QWORD *)v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v8);
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)v8 = v10;
    v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v8 + 8);
    v4 = v9 + 1;
  }
  winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Udwm::Transitions::UserResizeVisual *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
