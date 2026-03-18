/*
 * XREFs of ?Release@CGdiSpriteBitmap@@$4PPPPPPPM@BNA@EAAKXZ @ 0x1801074F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 464));
}
