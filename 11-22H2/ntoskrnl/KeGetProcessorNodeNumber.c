/*
 * XREFs of KeGetProcessorNodeNumber @ 0x140367B30
 * Callers:
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     HvlInitializeProcessor @ 0x14081FAAC (HvlInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140A898EC (MmInitializeProcessor.c)
 *     KiInitializeThreadCycleTable @ 0x140A8D520 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
