/*
 * XREFs of ?_Change_array@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@AEAAXQEAUCFlipPropertyItem@@_K1@Z @ 0x1801AE870
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUBatchSyncInfo@@$$QEAI@Z @ 0x1800A70E8 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@-$vector@UCFlipPropertyItem@@V-$alloca.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentParametersInfo@@$$QEAI@Z @ 0x1801ACD30 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@-$vector@UCFlipPropertyItem@@V.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@$$QEAI@Z @ 0x1801AF7A4 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10Info@@I@-$vector@UCFlipPrope.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@$$QEAI@Z @ 0x1801AF8A0 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateHDR10PlusInfo@@I@-$vector@UCFlipP.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@$$QEAI@Z @ 0x1801AF99C (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentedContentUpdateInfo@@I@-$vector@UCFlipPropertyIt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CFlipPropertyItem>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
