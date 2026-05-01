/*
 * XREFs of ??C?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x18069F078
 * Callers:
 *     __lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator()_::_1_::catch$2 @ 0x18024FA98 (__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_--operator()_--_1_--catch$2.c)
 *     __lambda_49390bb1d2cae92a58be327124002af0_::operator()_::_1_::catch$4 @ 0x18024FCF0 (__lambda_49390bb1d2cae92a58be327124002af0_--operator()_--_1_--catch$4.c)
 *     __lambda_6f980fbbc6752bcaca442c74782693a9_::operator()_::_1_::catch$2 @ 0x18024FFE9 (__lambda_6f980fbbc6752bcaca442c74782693a9_--operator()_--_1_--catch$2.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

_QWORD *__fastcall tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 1328));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8LL);
  return a2;
}
