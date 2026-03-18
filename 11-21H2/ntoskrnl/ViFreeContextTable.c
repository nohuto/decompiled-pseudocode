/*
 * XREFs of ViFreeContextTable @ 0x140A8360C
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
