/*
 * XREFs of ??$_Move_backward_unchecked@PEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@00@Z @ 0x1800FC588
 * Callers:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800FC714 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Move_backward_unchecked<winrt::Udwm::Transitions::UserResizeVisual *,winrt::Udwm::Transitions::UserResizeVisual *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // rax

  v4 = a2;
  while ( v4 != a1 )
  {
    a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 - 8);
    if ( a3 != (winrt::Windows::Foundation::IUnknown *)--v4 )
    {
      if ( *(_QWORD *)a3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
      v6 = *v4;
      *v4 = 0LL;
      *(_QWORD *)a3 = v6;
    }
  }
  return a3;
}
