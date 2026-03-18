/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140ADA130
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x1405D1E60 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x1405D1E80 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC0876 (VfIrpDatabaseCheckExFreePool.c)
 */

void __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  VfIrpDatabaseCheckExFreePool(a1);
}
