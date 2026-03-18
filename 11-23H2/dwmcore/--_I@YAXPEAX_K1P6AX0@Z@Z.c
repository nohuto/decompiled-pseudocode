/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180104CD8
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18000F16C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x1800103D8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x1800A912C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801026F8 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18010488C (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x180104C7C (--1CCpuClipAntialiasSink@@UEAA@XZ.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180104F4C (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180104FAC (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x1801243F0 (_dynamic_atexit_destructor_for__CCustomKernelEffect--s_rgspCache__.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801D13E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801FA5E8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x180208AE0 (--_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x18020D328 (--1CManipulation@@UEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x1802166CC (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180230330 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x1802541AC (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??1EffectStage@@QEAA@XZ @ 0x1802630A8 (--1EffectStage@@QEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x180298B64 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802AB0CC (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
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
