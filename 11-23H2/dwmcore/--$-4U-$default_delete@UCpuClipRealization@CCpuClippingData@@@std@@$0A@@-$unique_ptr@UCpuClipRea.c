/*
 * XREFs of ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EC924
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18002AD18 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CCpuClippingData::CpuClipRealization **__fastcall std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator=<std::default_delete<CCpuClippingData::CpuClipRealization>,0>(
        CCpuClippingData::CpuClipRealization **a1,
        CCpuClippingData::CpuClipRealization **a2)
{
  CCpuClippingData::CpuClipRealization *v3; // rax
  CCpuClippingData::CpuClipRealization *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CCpuClippingData::CpuClipRealization::~CpuClipRealization(v4);
      operator delete(v4, 0x88uLL);
    }
  }
  return a1;
}
