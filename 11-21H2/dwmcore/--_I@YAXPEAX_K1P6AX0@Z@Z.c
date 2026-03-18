/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18000B76C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18000C9B4 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180021810 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x180021FEC (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180023F74 (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x18010DBD0 (_dynamic_atexit_destructor_for__CCustomKernelEffect--s_rgspCache__.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADD08 (--1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801F3AE8 (--1CManipulation@@UEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x1801FD948 (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180218970 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x180242054 (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x180289334 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18029BF08 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
