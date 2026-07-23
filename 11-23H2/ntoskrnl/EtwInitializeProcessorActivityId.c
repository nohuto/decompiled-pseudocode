/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x14081DA84
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x14081DBFC (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 34472), *(unsigned int *)(a1 + 36));
  return 0LL;
}
