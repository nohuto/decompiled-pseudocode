/*
 * XREFs of ??C?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AV?$test_data_control@U_tip_RemoteSessionOnStateChangedTipTest@@@1@XZ @ 0x1807203C4
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?ensure_data@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@XZ @ 0x180724144 (-ensure_data@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>::operator->(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>::ensure_data();
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2,
    v3);
  tip::details::test_common_data<1>::begin_update(*a2 + 8LL);
  return a2;
}
