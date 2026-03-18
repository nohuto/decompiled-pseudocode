/*
 * XREFs of MiGetThreadPartition @ 0x140372620
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1407F4220 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
