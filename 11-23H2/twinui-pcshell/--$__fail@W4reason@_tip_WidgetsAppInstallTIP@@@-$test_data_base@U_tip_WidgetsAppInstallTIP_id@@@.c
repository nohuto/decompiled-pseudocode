/*
 * XREFs of ??$__fail@W4reason@_tip_WidgetsAppInstallTIP@@@?$test_data_base@U_tip_WidgetsAppInstallTIP_id@@@tip2@@IEBAXW4reason@_tip_WidgetsAppInstallTIP@@PEBD@Z @ 0x18022F87C
 * Callers:
 *     ?evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ @ 0x180698D20 (-evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_WidgetsAppInstallTIP_id>::__fail<enum _tip_WidgetsAppInstallTIP::reason>(
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
