/*
 * XREFs of ?CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800F1450
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800FB854 (-CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@P.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateYCbCrSurface(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4,
        struct IDCompositionYCbCrSurfacePartner **a5)
{
  DirectComposition::CSurfaceFactory *v9; // rcx
  unsigned int YCbCrSurface; // ebx
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = (_QWORD *)((char *)this + 72);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 72));
  v9 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 72);
  if ( v9 )
  {
    YCbCrSurface = DirectComposition::CSurfaceFactory::CreateYCbCrSurface(v9, a2, a3, a4, a5);
  }
  else
  {
    YCbCrSurface = -2147483634;
    if ( a5 )
      *a5 = 0LL;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v12);
  return YCbCrSurface;
}
