/*
 * XREFs of ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18002AD18
 * Callers:
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x180021188 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x18002D200 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180084778 (--1CTreeData@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EC924 (--$-4U-$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@-$unique_ptr@UCpuClipRea.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB50 (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CCpuClippingData::CpuClipRealization *this)
{
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 15);
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 96));
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 72));
}
