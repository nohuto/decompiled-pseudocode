/*
 * XREFs of ?GetPixelFormat@CCompositionSurface@DirectComposition@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18008EAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurface::GetPixelFormat(DirectComposition::CCompositionSurface *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 5) + 52LL);
}
