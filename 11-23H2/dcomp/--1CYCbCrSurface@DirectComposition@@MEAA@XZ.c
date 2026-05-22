/*
 * XREFs of ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C
 * Callers:
 *     ??_ECYCbCrSurface@DirectComposition@@MEAAPEAXI@Z @ 0x1800FEC80 (--_ECYCbCrSurface@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@DirectComposition@@@Z @ 0x1800ECFC4 (--$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@Direct.c)
 *     ??$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComposition@@@Z @ 0x1800FEB00 (--$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComp.c)
 */

void __fastcall DirectComposition::CYCbCrSurface::~CYCbCrSurface(DirectComposition::CYCbCrSurface *this)
{
  DirectComposition::CSurfaceFactory **v1; // rdi
  _QWORD *i; // rcx

  v1 = (DirectComposition::CSurfaceFactory **)((char *)this + 24);
  *(_QWORD *)this = &DirectComposition::CYCbCrSurface::`vftable'{for `CMILCOMBaseT<IDCompositionYCbCrSurfaceInternal>'};
  *((_QWORD *)this + 2) = &DirectComposition::CYCbCrSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL)
                                                                         + 96LL));
  if ( *((_BYTE *)this + 72) )
  {
    for ( i = (_QWORD *)((char *)*v1 + 328); (DirectComposition::CYCbCrSurface *)*i != this; i = (_QWORD *)(*i + 64LL) )
      ;
    *i = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
  }
  ReleaseInterface<DirectComposition::CYCbCrBitmapInfo>((volatile signed __int32 **)this + 6);
  ReleaseInterface<DirectComposition::CYCbCrBitmapInfo>((volatile signed __int32 **)this + 7);
  ReleaseInterface<DirectComposition::CYCbCrSurfaceProxy>((DirectComposition::CTransformGroupProxy **)this + 5);
  DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)(*((_QWORD *)*v1 + 3) + 96LL));
  ReleaseInterface<DirectComposition::CSurfaceFactory>(v1);
}
