/*
 * XREFs of ??$__fail@W4reason@_tip_TabTearOutEventTest@@@?$test_data_base@U_tip_TabTearOutEventTest_id@@@tip2@@IEBAXW4reason@_tip_TabTearOutEventTest@@PEBD@Z @ 0x18022362C
 * Callers:
 *     ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x18066E650 (-evaluate@_tip_TabTearOutEventTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_TabTearOutEventTest_id>::__fail<enum _tip_TabTearOutEventTest::reason>(
        __int64 a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 3;
    *(_WORD *)(result + 154) = a2;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
