/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140ADA120
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x1405D23D0 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x1405D23F0 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC0866 (VfIrpDatabaseCheckExFreePool.c)
 */

void __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  VfIrpDatabaseCheckExFreePool(a1);
}
