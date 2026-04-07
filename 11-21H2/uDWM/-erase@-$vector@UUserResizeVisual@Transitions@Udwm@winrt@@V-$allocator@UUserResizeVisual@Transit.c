/*
 * XREFs of ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x1800FEF10
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800FDD10 (-RemoveAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x1800FCC84 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::erase(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // r14
  winrt::Windows::Foundation::IUnknown *v4; // rdi
  winrt::Windows::Foundation::IUnknown *v8; // rsi
  __int64 v9; // rax
  _QWORD *result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  v4 = (winrt::Windows::Foundation::IUnknown *)(a3 + 1);
  v8 = (winrt::Windows::Foundation::IUnknown *)a3;
  if ( a3 + 1 != (_QWORD *)v3 )
  {
    do
    {
      if ( v8 != v4 )
      {
        if ( *(_QWORD *)v8 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v8);
        v9 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)v8 = v9;
      }
      v8 = v4;
      v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
    }
    while ( v4 != v3 );
    v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  }
  winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Windows::Foundation::IUnknown *)((char *)v3 - 8));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
