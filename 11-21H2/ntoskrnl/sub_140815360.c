/*
 * XREFs of sub_140815360 @ 0x140815360
 * Callers:
 *     sub_1406D9FC8 @ 0x1406D9FC8 (sub_1406D9FC8.c)
 *     sub_1408150FC @ 0x1408150FC (sub_1408150FC.c)
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_140840904 @ 0x140840904 (sub_140840904.c)
 *     sub_1409DA7FC @ 0x1409DA7FC (sub_1409DA7FC.c)
 *     sub_1409DA90C @ 0x1409DA90C (sub_1409DA90C.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_140815360(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return ExpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
