/*
 * XREFs of KeGetProcessorNodeNumber @ 0x140368320
 * Callers:
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     HvlInitializeProcessor @ 0x14081D7FC (HvlInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 *     KiInitializeThreadCycleTable @ 0x140A8CCC0 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
