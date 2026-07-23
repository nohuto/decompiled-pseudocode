/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x140361B80
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402B9BCC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x1402B8160 (ExpNewThreadNecessary.c)
 */

char __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  unsigned __int16 *v4; // r9
  __int64 v5; // r10

  result = ExpNewThreadNecessary(a3, *(_DWORD *)(a3 + 720));
  if ( result )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *v4) + 16LL), 0, 0);
  return result;
}
