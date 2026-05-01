/*
 * XREFs of ??$__ignore@W4reason@_tip_BootToCloudPCTest@@@?$test_data_base@V_tip_BootToCloudPCTest_id@@@tip@@IEBAXW4reason@_tip_BootToCloudPCTest@@PEBD@Z @ 0x18070232C
 * Callers:
 *     ?evaluate@_tip_BootToCloudPCTest@@QEAAXXZ @ 0x180707E24 (-evaluate@_tip_BootToCloudPCTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_base<_tip_BootToCloudPCTest_id>::__ignore<enum _tip_BootToCloudPCTest::reason>(
        __int64 *a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( !*(_BYTE *)(*a1 + 72) )
  {
    *(_BYTE *)(result + 72) = 4;
    *(_WORD *)(result + 74) = a2;
    *(_QWORD *)(result + 80) = a3;
  }
  return result;
}
