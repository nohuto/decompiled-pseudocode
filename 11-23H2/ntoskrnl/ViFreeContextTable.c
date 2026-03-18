/*
 * XREFs of ViFreeContextTable @ 0x140AC405C
 * Callers:
 *     VfInsertContext @ 0x1405CE440 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE5D0 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
