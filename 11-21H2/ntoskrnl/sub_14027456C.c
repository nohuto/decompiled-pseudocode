/*
 * XREFs of sub_14027456C @ 0x14027456C
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_140339CA0 @ 0x140339CA0 (sub_140339CA0.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 *     sub_1406EB238 @ 0x1406EB238 (sub_1406EB238.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_14096D038 @ 0x14096D038 (sub_14096D038.c)
 * Callees:
 *     sub_1402745EC @ 0x1402745EC (sub_1402745EC.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14027456C(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rcx

  if ( *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() && *((_QWORD *)&ListEntry[13].Next + 1) )
    sub_1402AFC00((ULONG_PTR)ListEntry);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    if ( !(unsigned int)sub_1402745EC(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
