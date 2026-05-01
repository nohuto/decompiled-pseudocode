/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180152E4C
 * Callers:
 *     ??1CDelayIAMOperations@@QEAA@XZ @ 0x180152DC4 (--1CDelayIAMOperations@@QEAA@XZ.c)
 *     ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x1802E6E94 (-RemoveAndReleaseAll@-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@.c)
 *     ??1?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804CECD4 (--1-$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V-$CSimpleArrayStandardCompareHelper@P.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804CF664 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x1805258DC (--1AppResizeData@@UEAA@XZ.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x180526330 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18057EF74 (--1CServiceHostComponent@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll(
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
