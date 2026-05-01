/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@tip@@QEAA?AV?$test_watcher@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@2@XZ @ 0x180724A0C
 * Callers:
 *     _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x18071E164 (_lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18071DC5C (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WaitOnLocalPCTes.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@details@tip@@@std@@QEAA@XZ @ 0x18071DDFC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WaitOnLocalPCTest@implementation@Transition.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::open_and_watch_errors(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  std::_Ref_count_base *v5; // rax
  void *v6; // rax
  std::_Ref_count_base *v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+50h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+18h] BYREF

  v14 = 0;
  v15 = 0LL;
  v4 = operator new(0xC8uLL);
  v5 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>::_Ref_count_obj2<tip::details::test_merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>(
                                 (__int64)v4,
                                 &v15,
                                 &v14);
  v10 = (__int64)v5 + 16;
  v11 = v5;
  std::shared_ptr<KBViewInfo>::operator=(a1, &v10);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( !*a1 )
  {
    v6 = operator new(0xC8uLL);
    v7 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>::_Ref_count_obj2<tip::details::test_merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>>((__int64)v6);
    v12 = (__int64)v7 + 16;
    v13 = v7;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v12);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v8 = a1[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = a1[1];
  return a2;
}
