/*
 * XREFs of ?CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800EF5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800FB750 (-CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateGradientSurface(
        DirectComposition::CDevice *this,
        unsigned int a2,
        enum DXGI_FORMAT a3,
        enum DXGI_ALPHA_MODE a4,
        enum D2D1_EXTEND_MODE a5,
        struct IDCompositionSurface **a6,
        unsigned int *a7)
{
  DirectComposition::CSurfaceFactory *v11; // rcx
  unsigned int GradientSurface; // ebx
  _QWORD *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (_QWORD *)((char *)this + 80);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 80));
  v11 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 73);
  if ( v11 )
  {
    GradientSurface = DirectComposition::CSurfaceFactory::CreateGradientSurface(v11, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    GradientSurface = -2147483634;
    if ( a6 )
      *a6 = 0LL;
    if ( a7 )
      *a7 = 0;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v14);
  return GradientSurface;
}
