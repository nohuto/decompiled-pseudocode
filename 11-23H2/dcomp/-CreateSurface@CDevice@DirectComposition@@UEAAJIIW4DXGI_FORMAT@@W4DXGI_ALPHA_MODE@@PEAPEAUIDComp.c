/*
 * XREFs of ?CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x180008200
 * Callers:
 *     ?CreateSurface@CDevice@DirectComposition@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x1800A8930 (-CreateSurface@CDevice@DirectComposition@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCom.c)
 *     ?CreateSurface@CDevice@DirectComposition@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x1800A8950 (-CreateSurface@CDevice@DirectComposition@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDC.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurface(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionSurface **a6)
{
  DirectComposition::CSurfaceFactory *v10; // rcx
  unsigned int Surface; // ebx
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (char *)this + 96;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v10 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 75);
  if ( v10 )
  {
    Surface = DirectComposition::CSurfaceFactory::CreateSurface(v10, a2, a3, a4, a5, 0, a6);
  }
  else
  {
    Surface = -2147483634;
    if ( a6 )
      *a6 = 0LL;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v13);
  return Surface;
}
