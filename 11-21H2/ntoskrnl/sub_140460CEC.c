/*
 * XREFs of sub_140460CEC @ 0x140460CEC
 * Callers:
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 *     sub_140636A30 @ 0x140636A30 (sub_140636A30.c)
 *     sub_1409EEF94 @ 0x1409EEF94 (sub_1409EEF94.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

char __fastcall sub_140460CEC(__int64 a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 832), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 848), *(_DWORD *)(a1 + 1048), 0);
  }
  else
  {
    v3 = ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 816), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 872), 0LL, 0LL);
  }
  return (char)v3;
}
