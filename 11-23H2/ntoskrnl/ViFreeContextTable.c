/*
 * XREFs of ViFreeContextTable @ 0x140AC404C
 * Callers:
 *     VfInsertContext @ 0x1405CE9B0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CEB40 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
