/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x18011CBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 88));
}
