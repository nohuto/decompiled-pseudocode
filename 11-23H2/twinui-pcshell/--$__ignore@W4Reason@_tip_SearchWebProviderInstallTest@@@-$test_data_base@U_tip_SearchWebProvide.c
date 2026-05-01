/*
 * XREFs of ??$__ignore@W4Reason@_tip_SearchWebProviderInstallTest@@@?$test_data_base@U_tip_SearchWebProviderInstallTest_id@@@tip2@@IEBAXW4Reason@_tip_SearchWebProviderInstallTest@@PEBD@Z @ 0x180462B08
 * Callers:
 *     ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x18046C678 (-evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_SearchWebProviderInstallTest_id>::__ignore<enum _tip_SearchWebProviderInstallTest::Reason>(
        __int64 a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 4;
    *(_WORD *)(result + 154) = a2;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
