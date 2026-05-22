/*
 * XREFs of ?GetCompositionSurfaceProxy@CCompositionSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z @ 0x180013400
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438 (-EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::GetCompositionSurfaceProxy(
        DirectComposition::CCompositionSurface *this,
        struct IUnknown **a2)
{
  __int64 result; // rax

  result = DirectComposition::CCompositionSurface::EnsureRealization(this);
  if ( (int)result >= 0 )
    *a2 = *(struct IUnknown **)(*((_QWORD *)this + 8) + 56LL);
  return result;
}
