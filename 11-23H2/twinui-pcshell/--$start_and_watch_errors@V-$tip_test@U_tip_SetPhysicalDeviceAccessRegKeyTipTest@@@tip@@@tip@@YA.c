/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180276B94
 * Callers:
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@2@XZ @ 0x180278D88 (-start_and_watch_errors@-$tip_test@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tip@@QEAA-AV-$te.c)
 */

__int64 __fastcall tip::start_and_watch_errors<tip::tip_test<_tip_SetPhysicalDeviceAccessRegKeyTipTest>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_SetPhysicalDeviceAccessRegKeyTipTest>::start_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
