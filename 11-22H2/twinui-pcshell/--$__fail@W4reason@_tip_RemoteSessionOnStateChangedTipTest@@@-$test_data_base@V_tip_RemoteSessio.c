/*
 * XREFs of ??$__fail@W4reason@_tip_RemoteSessionOnStateChangedTipTest@@@?$test_data_base@V_tip_RemoteSessionOnStateChangedTipTest_id@@@tip@@IEBAXW4reason@_tip_RemoteSessionOnStateChangedTipTest@@PEBD@Z @ 0x18071EDE8
 * Callers:
 *     ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x180724548 (-evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_base<_tip_RemoteSessionOnStateChangedTipTest_id>::__fail<enum _tip_RemoteSessionOnStateChangedTipTest::reason>(
        __int64 *a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( !*(_BYTE *)(*a1 + 72) )
  {
    *(_BYTE *)(result + 72) = 3;
    *(_WORD *)(result + 74) = a2;
    *(_QWORD *)(result + 80) = a3;
  }
  return result;
}
