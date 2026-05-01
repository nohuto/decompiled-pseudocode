/*
 * XREFs of ??$__warn@W4Reason@_tip_SearchHideTest@@@?$test_data_base@U_tip_SearchHideTest_id@@@tip2@@IEBAXW4Reason@_tip_SearchHideTest@@PEBD@Z @ 0x180462B34
 * Callers:
 *     ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x180058934 (-evaluate@_tip_SearchHideTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_SearchHideTest_id>::__warn<enum _tip_SearchHideTest::Reason>(
        __int64 a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 2;
    *(_WORD *)(result + 154) = a2;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
