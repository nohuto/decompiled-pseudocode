/*
 * XREFs of sub_1406CD41C @ 0x1406CD41C
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1406CD41C(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x100000u);
  _m_prefetchw(&dword_140C1BEA0);
  if ( (_InterlockedOr(&dword_140C1BEA0, 6u) & 4) == 0 )
    ExQueueWorkItem(&stru_140C1BE80, DelayedWorkQueue);
}
