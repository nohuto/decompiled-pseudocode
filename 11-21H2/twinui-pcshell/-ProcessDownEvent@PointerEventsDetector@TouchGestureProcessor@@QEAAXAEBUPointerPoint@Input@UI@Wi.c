/*
 * XREFs of ?ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18058F46C
 * Callers:
 *     _lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CB98 (_lambda_645383672cc8ef3abc3762ef416a0823_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$_Emplace@I@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@$$QEAI@Z @ 0x18058CCD8 (--$_Emplace@I@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-AU-$.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x18058ECC8 (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

void __fastcall TouchGestureProcessor::PointerEventsDetector::ProcessDownEvent(
        TouchGestureProcessor::PointerEventsDetector *this,
        const struct winrt::Windows::UI::Input::PointerPoint *a2)
{
  _QWORD *v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    *(_OWORD *)v6 = 0LL;
    v4 = (_QWORD *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v6);
    tip::details::test_common_data<1>::start(*v4 + 8LL, &v7);
    *(_QWORD *)this = *std::chrono::steady_clock::now(&v8);
    v5 = v6[1];
    *((_BYTE *)this + 157) = 1;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  LODWORD(v8) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId((__int64 *)a2);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int>(
    (__int64 *)this + 1,
    (__int64)&v7,
    (unsigned int *)&v8);
}
