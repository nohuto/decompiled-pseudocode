/*
 * XREFs of ?CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800FB854
 * Callers:
 *     ?CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800F1450 (-CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUID.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectComposition@@@Z @ 0x1800FB6B0 (--$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectCompositio.c)
 *     ?Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAV12@@Z @ 0x1800FEDB4 (-Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPL.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::CreateYCbCrSurface(
        DirectComposition::CSurfaceFactory *this,
        unsigned int a2,
        unsigned int a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4,
        struct IDCompositionYCbCrSurfacePartner **a5)
{
  struct IDCompositionYCbCrSurfacePartner **v9; // rdi
  int v10; // ebx
  struct IDCompositionYCbCrSurfacePartner **v11; // rcx
  DirectComposition::CDeviceLock *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v13);
  v9 = a5;
  if ( a5 )
  {
    if ( *((_DWORD *)this + 86) )
    {
      v10 = -2147467259;
    }
    else
    {
      a5 = 0LL;
      v10 = DirectComposition::CYCbCrSurface::Create(this, a2, a3, a4, (struct DirectComposition::CYCbCrSurface **)&a5);
      if ( v10 < 0 )
      {
        *v9 = 0LL;
      }
      else
      {
        v11 = a5;
        a5 = 0LL;
        *v9 = (struct IDCompositionYCbCrSurfacePartner *)v11;
      }
      ReleaseInterface<DirectComposition::CYCbCrSurface>((volatile signed __int32 **)&a5);
    }
  }
  else
  {
    v10 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v13);
  return (unsigned int)v10;
}
