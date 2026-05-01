/*
 * XREFs of __lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x180277360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 */

void __fastcall _lambda_c27fb3894833df319de68fad3b02a886___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 176) + 16LL;
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>(*(_QWORD *)(a2 + 88));
}
