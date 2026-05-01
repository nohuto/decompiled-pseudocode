/*
 * XREFs of _lambda_d81cebd908bc953c0c32f92e43af8435_::_lambda_d81cebd908bc953c0c32f92e43af8435_ @ 0x1806AB31C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 */

__int64 __fastcall lambda_d81cebd908bc953c0c32f92e43af8435_::_lambda_d81cebd908bc953c0c32f92e43af8435_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rax

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1,
    a2);
  v4 = v3[1];
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(v2 + 16) = *v3;
  *(_QWORD *)(v2 + 24) = v3[1];
  return v2;
}
