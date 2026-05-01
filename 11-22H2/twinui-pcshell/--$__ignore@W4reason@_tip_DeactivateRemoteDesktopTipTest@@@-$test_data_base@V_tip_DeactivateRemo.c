/*
 * XREFs of ??$__ignore@W4reason@_tip_DeactivateRemoteDesktopTipTest@@@?$test_data_base@V_tip_DeactivateRemoteDesktopTipTest_id@@@tip@@IEBAXW4reason@_tip_DeactivateRemoteDesktopTipTest@@PEBD@Z @ 0x18027912C
 * Callers:
 *     ?evaluate@_tip_DeactivateRemoteDesktopTipTest@@QEAAXXZ @ 0x18071B3E4 (-evaluate@_tip_DeactivateRemoteDesktopTipTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_base<_tip_DeactivateRemoteDesktopTipTest_id>::__ignore<enum _tip_DeactivateRemoteDesktopTipTest::reason>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( !*(_BYTE *)(*a1 + 72) )
  {
    *(_BYTE *)(result + 72) = 4;
    *(_WORD *)(result + 74) = 7;
    *(_QWORD *)(result + 80) = a3;
  }
  return result;
}
