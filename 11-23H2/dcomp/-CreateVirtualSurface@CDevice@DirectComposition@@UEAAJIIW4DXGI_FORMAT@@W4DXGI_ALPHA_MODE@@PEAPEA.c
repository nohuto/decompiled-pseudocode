/*
 * XREFs of ?CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800F1300
 * Callers:
 *     ?CreateVirtualSurface@CDevice@DirectComposition@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800A8B30 (-CreateVirtualSurface@CDevice@DirectComposition@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPE.c)
 *     ?CreateVirtualSurface@CDevice@DirectComposition@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800A8B50 (-CreateVirtualSurface@CDevice@DirectComposition@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890 (-CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateVirtualSurface(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionVirtualSurface **a6)
{
  DirectComposition::CSurfaceFactory *v10; // rcx
  unsigned int VirtualSurface; // ebx
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v10 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 75);
  if ( v10 )
  {
    VirtualSurface = DirectComposition::CSurfaceFactory::CreateVirtualSurface(v10, a2, a3, a4, a5, a6);
  }
  else
  {
    VirtualSurface = -2147483634;
    if ( a6 )
      *a6 = 0LL;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v13);
  return VirtualSurface;
}
