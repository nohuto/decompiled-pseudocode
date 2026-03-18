/*
 * XREFs of ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800D4E30
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800D4F10 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::UpdateBVIForVisual(
        __int64 a1,
        struct CVisual *a2,
        float *a3,
        char a4,
        __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r9
  int updated; // eax
  unsigned int v11; // ebx
  char *v12; // rcx
  __int64 v13; // rdx
  char *v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h]
  char v17; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3) )
    return 0LL;
  CVisualTreePath::CVisualTreePath((CVisualTreePath *)&v15, *(const struct CVisualTree **)(*(_QWORD *)v8 + 432LL));
  LOBYTE(v9) = a4;
  updated = CVisual::CreateOrUpdateBVI(a2, (struct CVisualTreePath *)&v15, (__int64)a3, v9, a5);
  v11 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x860,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)updated);
  else
    v11 = 0;
  v12 = v15;
  v13 = (v16 - (__int64)v15) >> 4;
  if ( v13 )
    v16 += -16 * v13;
  v15 = 0LL;
  if ( v12 == &v17 )
    v12 = 0LL;
  DefaultHeap::Free(v12);
  return v11;
}
