/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAAEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU2345@@Z @ 0x1800FC15C
 * Callers:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800FC714 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FCD10 (-Append@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResize.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_back_with_unused_capacity<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 a1,
        _QWORD *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  __int64 result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  *(_QWORD *)v3 = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v3);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
