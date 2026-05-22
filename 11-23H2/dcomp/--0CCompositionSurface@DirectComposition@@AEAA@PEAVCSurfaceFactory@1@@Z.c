/*
 * XREFs of ??0CCompositionSurface@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@@Z @ 0x1800EB0D4
 * Callers:
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

DirectComposition::CCompositionSurface *__fastcall DirectComposition::CCompositionSurface::CCompositionSurface(
        DirectComposition::CCompositionSurface *this,
        struct DirectComposition::CSurfaceFactory *a2)
{
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceInternal'};
  *((_QWORD *)this + 1) = &DirectComposition::CCompositionSurface::`vftable'{for `IDCompositionSurfaceDebug'};
  *((_QWORD *)this + 2) = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    DirectComposition::CSurfaceFactory::AddRef(a2);
  return this;
}
