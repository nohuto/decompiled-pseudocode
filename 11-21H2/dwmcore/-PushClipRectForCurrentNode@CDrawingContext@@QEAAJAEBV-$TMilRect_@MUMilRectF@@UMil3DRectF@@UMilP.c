/*
 * XREFs of ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B19C (-ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18008B2D8 (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(CDrawingContext *this, __int128 *a2)
{
  struct CRectanglesShape *v4; // rcx
  int v5; // eax
  _OWORD *v6; // rax
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rbx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const struct CVisualTree *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CVisual *v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-C8h] BYREF
  char v19; // [rsp+40h] [rbp-C0h]
  _BYTE v20[100]; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v21[4]; // [rsp+ACh] [rbp-54h] BYREF
  int v22; // [rsp+ECh] [rbp-14h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  char v24; // [rsp+100h] [rbp+0h]
  __int128 v25; // [rsp+110h] [rbp+10h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)&v17);
  v17 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v5 = *((_DWORD *)this + 92);
  if ( v5 )
  {
    v4 = (struct CRectanglesShape *)(unsigned int)(v5 - 1);
    v6 = (_OWORD *)(*((_QWORD *)this + 48) + 68LL * (_QWORD)v4);
  }
  else
  {
    v6 = &CMILMatrix::Identity;
  }
  v21[0] = *v6;
  v21[1] = v6[1];
  v21[2] = v6[2];
  v21[3] = v6[3];
  v22 = *((_DWORD *)v6 + 16);
  ObjectCache = CThreadContext::GetObjectCache(v4);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v8 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v8[1] = 0LL;
    *v8 = &CRectanglesShape::`vftable';
    *((_DWORD *)v8 + 10) = 0;
    v8[2] = v8 + 6;
    v8[3] = v8 + 6;
    *((_DWORD *)v8 + 8) = 1;
    *((_DWORD *)v8 + 9) = 1;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v8 + 6);
    v8[8] = 0LL;
    *((_DWORD *)v8 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v8 + 2, 16LL);
    v10 = v8[8];
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v8[8] = 0LL;
    }
    v25 = *a2;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)(v8 + 2),
      &v25,
      1u);
  }
  CShapePtr::Release((CShapePtr *)&v18);
  v18 = v8;
  v19 = 1;
  if ( v8 )
  {
    if ( !CDrawingContext::ShouldRealizeCpuClipOnGpu(this, (const struct CShape *)v8, (const struct CMILMatrix *)v21) )
    {
      v12 = (const struct CVisualTree *)*((_QWORD *)this + 991);
      v24 = 1;
      v23 = *((_QWORD *)CVisual::FindTreeData(v17, v12) + 14);
    }
    v13 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xC95u);
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024882, 0xC8Bu);
  }
  CShapePtr::Release((CShapePtr *)v20);
  CShapePtr::Release((CShapePtr *)&v18);
  return v15;
}
