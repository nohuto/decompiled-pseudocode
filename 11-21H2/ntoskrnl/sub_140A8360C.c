/*
 * XREFs of sub_140A8360C @ 0x140A8360C
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

PSLIST_ENTRY __fastcall sub_140A8360C(_SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  return sub_140203D88((__int64)&unk_140D59240, a1, a3);
}
