/*
 * XREFs of ?Release@CCompositionSurface@DirectComposition@@UEAAKXZ @ 0x180078030
 * Callers:
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ?Release@CCompositionSurface@DirectComposition@@W7EAAKXZ @ 0x1800A82D0 (-Release@CCompositionSurface@DirectComposition@@W7EAAKXZ.c)
 *     ?Release@CCompositionSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A82F0 (-Release@CCompositionSurface@DirectComposition@@WBA@EAAKXZ.c)
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 * Callees:
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::Release(DirectComposition::CCompositionSurface *this)
{
  unsigned __int32 v2; // ebx
  HANDLE ProcessHeap; // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
  {
    DirectComposition::CCompositionSurface::~CCompositionSurface(this);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return v2;
}
