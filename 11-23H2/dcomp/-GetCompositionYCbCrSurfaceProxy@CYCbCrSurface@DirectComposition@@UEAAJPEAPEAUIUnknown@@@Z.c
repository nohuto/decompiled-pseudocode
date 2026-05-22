/*
 * XREFs of ?GetCompositionYCbCrSurfaceProxy@CYCbCrSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z @ 0x18008F1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::GetCompositionYCbCrSurfaceProxy(
        DirectComposition::CYCbCrSurface *this,
        struct IUnknown **a2)
{
  *a2 = (struct IUnknown *)*((_QWORD *)this + 5);
  return 0LL;
}
