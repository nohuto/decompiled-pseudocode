/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardCompareHelper@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardMergeHelper@UISC_SERVICE@CServiceHostComponent@@@@@@QEAAXXZ @ 0x180586D58
 * Callers:
 *     ??1?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1805864D4 (--1-$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V-$CSimpleArrayStandardCompareHelper@P.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180586EA4 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x1805DE23C (--1AppResizeData@@UEAA@XZ.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x1805DEC60 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18063DF84 (--1CServiceHostComponent@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
