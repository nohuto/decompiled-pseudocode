/*
 * XREFs of ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890
 * Callers:
 *     ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x18003A7D0 (-RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Gra.c)
 *     ?CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800F1300 (-CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEA.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378 (-Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPH.c)
 *     ??$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003A9A4 (--$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::CreateVirtualSurface(
        DirectComposition::CSurfaceFactory *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        DXGI_ALPHA_MODE a5,
        struct IDCompositionVirtualSurface **a6)
{
  struct IDCompositionVirtualSurface **v10; // rdi
  int v11; // ebx
  struct IDCompositionVirtualSurface **v12; // rcx
  DirectComposition::CDeviceLock *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v14);
  v10 = a6;
  if ( a6 )
  {
    if ( *((_DWORD *)this + 86) )
    {
      v11 = -2147467259;
    }
    else
    {
      a6 = 0LL;
      v11 = DirectComposition::CVirtualSurface::Create(
              this,
              a2,
              a3,
              a4,
              a5,
              (struct DirectComposition::CVirtualSurface **)&a6);
      if ( v11 < 0 )
      {
        *v10 = 0LL;
      }
      else
      {
        v12 = a6;
        a6 = 0LL;
        *v10 = (struct IDCompositionVirtualSurface *)v12;
      }
      ReleaseInterface<DirectComposition::CVirtualSurface>(&a6);
    }
  }
  else
  {
    v11 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v14);
  return (unsigned int)v11;
}
