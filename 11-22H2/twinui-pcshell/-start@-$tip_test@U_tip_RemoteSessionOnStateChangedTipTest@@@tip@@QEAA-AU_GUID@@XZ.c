/*
 * XREFs of ?start@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180724DC8
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@XZ @ 0x180724144 (-ensure_data@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$.c)
 */

_OWORD *__fastcall tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>::start(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v4 = *a1;
  if ( v4 && tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  v5 = tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>::ensure_data(a1);
  tip::details::test_common_data<1>::start(*v5 + 8LL, a2);
  return a2;
}
