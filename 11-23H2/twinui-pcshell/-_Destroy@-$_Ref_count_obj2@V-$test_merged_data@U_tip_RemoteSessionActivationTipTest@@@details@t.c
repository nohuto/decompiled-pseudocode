/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x180723A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x180720354 (--1_tip_RemoteSessionActivationTipTest@@QEAA@XZ.c)
 */

void __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  _tip_RemoteSessionActivationTipTest::~_tip_RemoteSessionActivationTipTest(
    (_tip_RemoteSessionActivationTipTest *)(a1 + 192),
    a2);
  tip::details::test_common_data<1>::~test_common_data<1>(a1 + 24);
}
