/*
 * XREFs of ?Release@CContent@@$4PPPPPPPM@FA@EAAKXZ @ 0x1801053B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 80));
}
