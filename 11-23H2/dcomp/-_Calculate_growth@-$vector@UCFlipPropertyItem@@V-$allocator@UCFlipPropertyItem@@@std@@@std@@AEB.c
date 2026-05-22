/*
 * XREFs of ?_Calculate_growth@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@AEBA_K_K@Z @ 0x1801AE764
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUBatchSyncInfo@@$$QEAI@Z @ 0x1800A70E8 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@-$vector@UCFlipPropertyItem@@V-$alloca.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentParametersInfo@@$$QEAI@Z @ 0x1801ACD30 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@-$vector@UCFlipPropertyItem@@V.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@$$QEAI@Z @ 0x1801AF7A4 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@-$vector@UCFlipPrope.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@$$QEAI@Z @ 0x1801AF8A0 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@-$vector@UCFlipP.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@$$QEAI@Z @ 0x1801AF99C (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@-$vector@UCFlipPropertyIt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CFlipPropertyItem>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
