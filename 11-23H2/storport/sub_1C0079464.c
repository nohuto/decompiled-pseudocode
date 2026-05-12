/*
 * XREFs of sub_1C0079464 @ 0x1C0079464
 * Callers:
 *     sub_1C0056144 @ 0x1C0056144 (sub_1C0056144.c)
 * Callees:
 *     sub_1C00793D4 @ 0x1C00793D4 (sub_1C00793D4.c)
 */

BOOLEAN __fastcall sub_1C0079464(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *v1; // rbx

  v1 = *a1;
  ExpInterlockedPushEntrySList(*a1 + 4, (PSLIST_ENTRY)&a1[1][-2]);
  if ( KeGetCurrentIrql() <= 2u )
    return (unsigned __int8)sub_1C00793D4((PVOID)v1->Region, v1 + 4);
  _InterlockedIncrement((volatile signed __int32 *)&v1[5].HeaderX64 + 1);
  return KeInsertQueueDpc((PRKDPC)((char *)&v1[5].HeaderX64 + 8), 0LL, 0LL);
}
