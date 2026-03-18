/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x140A17470
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
