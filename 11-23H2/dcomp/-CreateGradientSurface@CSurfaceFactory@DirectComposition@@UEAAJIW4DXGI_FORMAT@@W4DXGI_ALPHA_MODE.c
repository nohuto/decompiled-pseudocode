/*
 * XREFs of ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800FB750
 * Callers:
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 *     ?CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800EF5D0 (-CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::CreateGradientSurface(
        DirectComposition::CSurfaceFactory *this,
        unsigned int a2,
        enum DXGI_FORMAT a3,
        enum DXGI_ALPHA_MODE a4,
        enum D2D1_EXTEND_MODE a5,
        struct IDCompositionSurface **a6,
        unsigned int *a7)
{
  struct IDCompositionSurface **v11; // rsi
  unsigned int *v12; // rdi
  int v13; // ebx
  DirectComposition::CDeviceLock *v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v15);
  v11 = a6;
  v12 = a7;
  if ( !a6 || !a7 || a2 > 0x800 )
  {
    v13 = -2147024809;
    goto LABEL_9;
  }
  if ( !*((_DWORD *)this + 86) )
  {
    a6 = 0LL;
    v13 = DirectComposition::CCompositionSurface::Create(
            this,
            a2,
            1u,
            a3,
            a4,
            &a5,
            0,
            (struct DirectComposition::CCompositionSurface **)&a6,
            a7);
    *v11 = (struct IDCompositionSurface *)a6;
    if ( v13 >= 0 )
      goto LABEL_13;
LABEL_9:
    if ( !v11 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v13 = -2147467259;
LABEL_10:
  *v11 = 0LL;
LABEL_11:
  if ( v12 )
    *v12 = 0;
LABEL_13:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v15);
  return (unsigned int)v13;
}
