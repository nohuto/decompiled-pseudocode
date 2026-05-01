/*
 * XREFs of ??C?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@1@XZ @ 0x180229758
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

_QWORD *__fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 344));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8LL);
  return a2;
}
