/*
 * XREFs of MiGetThreadPartition @ 0x14036F3B8
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1407EB760 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
