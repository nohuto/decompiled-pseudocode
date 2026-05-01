/*
 * XREFs of ??$__warn@W4reason@_tip_AppPrelaunch@@@?$test_data_base@U_tip_AppPrelaunch_id@@@tip2@@IEBAXW4reason@_tip_AppPrelaunch@@PEBD@Z @ 0x18022F8A8
 * Callers:
 *     ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x180698B70 (-evaluate@_tip_AppPrelaunch@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_AppPrelaunch_id>::__warn<enum _tip_AppPrelaunch::reason>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 2;
    *(_WORD *)(result + 154) = 4;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
