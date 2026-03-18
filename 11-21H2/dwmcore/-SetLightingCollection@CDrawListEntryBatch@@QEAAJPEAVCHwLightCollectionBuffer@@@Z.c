/*
 * XREFs of ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180011354 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListEntryBatch::SetLightingCollection(
        struct CHwLightCollectionBuffer **this,
        struct CHwLightCollectionBuffer *a2)
{
  int v2; // ebx
  struct CHwLightCollectionBuffer *v6; // rcx
  CBatchCommand *v7; // rcx
  CBatchCommand *v8; // r14
  struct CHwLightCollectionBuffer *v9; // rax
  CBatchOptimizer *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13[2]; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  CBatchCommand *v15; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  if ( a2 == this[5] )
    return (unsigned int)v2;
  ++dword_1803D312C;
  v6 = this[3];
  v15 = 0LL;
  *(_QWORD *)v13 = 0LL;
  v14 = 1;
  v2 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>((__int64)v6 + 64, v13);
  if ( v14 )
  {
    v7 = v15;
    v15 = *(CBatchCommand **)v13;
    if ( v7 )
      CBatchCommand::`scalar deleting destructor'(v7);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0LL, v2, 0xC3u);
  }
  else
  {
    v8 = v15;
    *((_QWORD *)v15 + 1) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
    *(_DWORD *)v8 = 2;
    v9 = this[3];
    v10 = (CBatchOptimizer *)*((_QWORD *)v9 + 20);
    if ( v10 )
    {
      CBatchOptimizer::AddStateSettingCommand(v10, &v15);
LABEL_11:
      this[5] = a2;
      goto LABEL_12;
    }
    v11 = CDrawListBatchManager::AddBatchCommand((char *)v9 + 24, &v15);
    v2 = v11;
    if ( v11 >= 0 )
      goto LABEL_11;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xCDu);
  }
LABEL_12:
  if ( v15 )
    CBatchCommand::`scalar deleting destructor'(v15);
  return (unsigned int)v2;
}
