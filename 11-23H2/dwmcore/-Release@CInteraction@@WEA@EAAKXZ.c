/*
 * XREFs of ?Release@CInteraction@@WEA@EAAKXZ @ 0x18011D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteraction::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 64));
}
