/*
 * XREFs of ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700
 * Callers:
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0 (_lambda_751c3952807d6b9c6862705cee6a52fd_--operator().c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     _lambda_062269caf21d1731995437aeb6cb5354_::operator() @ 0x1801C49D4 (_lambda_062269caf21d1731995437aeb6cb5354_--operator().c)
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 *     _lambda_ff813731644cb9328dc438ea795a8eda_::operator() @ 0x1801C58BC (_lambda_ff813731644cb9328dc438ea795a8eda_--operator().c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$101 @ 0x1801C783C (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$101.c)
 *     _XamlLauncherState::OnCortanaLaunchResult_::_1_::dtor$2 @ 0x180220DA5 (_XamlLauncherState--OnCortanaLaunchResult_--_1_--dtor$2.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>(
        __int64 *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip::details::test_common_data<1>::end_update(v2 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  }
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
