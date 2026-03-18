/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800B444C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B79C4 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8534 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x1800B90C8 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800BD0DC (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800F0BE0 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18026A350 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800B450C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800B9484 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  CRenderingTechnique *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)DefaultHeap::Alloc(0x120uLL);
  if ( !v5 || (v7 = CRenderingTechnique::CRenderingTechnique(v5), (v8 = (CRenderingTechnique *)v7) == 0LL) )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x24Du, 0LL);
    return v12;
  }
  v9 = *a1 + 144LL;
  v19 = v7;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v12 = -2147024362;
    goto LABEL_11;
  }
  if ( v11 > *(_DWORD *)(v9 + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8LL, 1LL, &v19);
    v16 = v14;
    v12 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x250u, 0LL);
    CRenderingTechnique::`scalar deleting destructor'(v8, v18);
    return v12;
  }
  *(_QWORD *)(*(_QWORD *)v9 + 8LL * v10) = v8;
  *(_DWORD *)(v9 + 24) = v11;
LABEL_6:
  *a3 = *(_DWORD *)(v9 + 24) - 1;
  return 0;
}
