/*
 * XREFs of ??0CVirtualSurface@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18003A154
 * Callers:
 *     ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378 (-Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPH.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

DirectComposition::CVirtualSurface *__fastcall DirectComposition::CVirtualSurface::CVirtualSurface(
        DirectComposition::CVirtualSurface *this,
        struct DirectComposition::CSurfaceFactory *a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum DXGI_ALPHA_MODE a6)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = (char *)this + 56;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)((char *)this + 44) = 1LL;
  *(_QWORD *)this = &DirectComposition::CVirtualSurface::`vftable'{for `CMILCOMBaseT<IDCompositionVirtualSurface>'};
  *((_QWORD *)this + 2) = &DirectComposition::CVirtualSurface::`vftable'{for `DirectComposition::CDirtyNotifier'};
  *((_QWORD *)this + 8) = &DirectComposition::CVirtualSurface::`vftable'{for `IDCompositionSurfaceDebug'};
  *((_QWORD *)this + 9) = &DirectComposition::CVirtualSurface::`vftable'{for `IDCompositionSurfacePartner'};
  *((_QWORD *)this + 10) = &DirectComposition::CVirtualSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
  *((_DWORD *)this + 31) = a5;
  *((_QWORD *)this + 17) = (char *)this + 144;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 120) = a6 == DXGI_ALPHA_MODE_IGNORE;
  *((_DWORD *)this + 28) = a3;
  *((_DWORD *)this + 29) = a4;
  *((_QWORD *)this + 13) = a2;
  if ( a2 )
    DirectComposition::CSurfaceFactory::AddRef(a2);
  return this;
}
