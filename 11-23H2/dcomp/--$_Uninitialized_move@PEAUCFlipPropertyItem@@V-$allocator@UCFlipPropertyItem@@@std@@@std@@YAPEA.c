/*
 * XREFs of ??$_Uninitialized_move@PEAUCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@YAPEAUCFlipPropertyItem@@QEAU1@0PEAU1@AEAV?$allocator@UCFlipPropertyItem@@@0@@Z @ 0x1801ACE2C
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUBatchSyncInfo@@$$QEAI@Z @ 0x1800A70E8 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@-$vector@UCFlipPropertyItem@@V-$alloca.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentParametersInfo@@$$QEAI@Z @ 0x1801ACD30 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@-$vector@UCFlipPropertyItem@@V.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@$$QEAI@Z @ 0x1801AF7A4 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@-$vector@UCFlipPrope.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@$$QEAI@Z @ 0x1801AF8A0 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@-$vector@UCFlipP.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@$$QEAI@Z @ 0x1801AF99C (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@-$vector@UCFlipPropertyIt.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<CFlipPropertyItem *>(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    a3 += 2;
    a1 += 2;
  }
  return a3;
}
