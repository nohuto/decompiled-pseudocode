/*
 * XREFs of ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x1800C39D8
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800C167C (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800C3414 (--0CCpuClip@@QEAA@XZ.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClip::Initialize(
        CCpuClip *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        unsigned int a5,
        const struct CCpuClipAntialiasSinkContext *a6)
{
  CMILMatrix *v10; // rcx

  CShapePtr::Release((CCpuClip *)((char *)this + 80));
  v10 = (CCpuClip *)((char *)this + 8);
  *((_DWORD *)this + 25) = a5;
  *((_QWORD *)this + 13) = a6;
  *((_BYTE *)this + 112) = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 24) = a4;
  if ( a3 )
  {
    *(_OWORD *)v10 = *(_OWORD *)a3;
    *(_OWORD *)((char *)this + 24) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)this + 40) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 16);
  }
  else
  {
    CMILMatrix::SetToIdentity(v10);
  }
}
