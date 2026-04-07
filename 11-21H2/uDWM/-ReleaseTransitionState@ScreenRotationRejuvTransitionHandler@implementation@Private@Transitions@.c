/*
 * XREFs of ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0
 * Callers:
 *     ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC (-Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA.c)
 * Callees:
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x180013F74 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAAXXZ @ 0x18003FEA4 (-reset@-$shared_ptr@V-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udw.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068 (-ensure_data@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV-$s.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180040D9C (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ReleaseTransitionState(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((char *)this + 40);
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 40, &v13) )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v1);
    if ( v1 != (winrt::Windows::Foundation::IUnknown *)&v13 )
    {
      if ( *(_QWORD *)v1 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
      *(_QWORD *)v1 = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 6);
  v4 = (_QWORD *)((char *)this + 136);
  v5 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data((char *)this + 136);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    &v11,
    v5);
  v6 = v11;
  tip::details::test_common_data<0>::begin_update(v11 + 8);
  v7 = v6 + 160;
  if ( !v6 )
    v7 = 16LL;
  *(_BYTE *)v7 = v3 == 0;
  if ( v6 )
  {
    tip::details::test_common_data<0>::end_update(v6 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(&v11);
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v8 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(v4);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    &v11,
    v8);
  v9 = v11;
  tip::details::test_common_data<0>::begin_update(v11 + 8);
  v10 = v9 + 161;
  if ( !v9 )
    v10 = 17LL;
  *(_BYTE *)v10 = 1;
  if ( v9 )
  {
    tip::details::test_common_data<0>::end_update(v9 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::reset(&v11);
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( *v4 )
    tip::details::test_common_data<0>::complete(*v4 + 8LL);
}
