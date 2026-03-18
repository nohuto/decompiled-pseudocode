/*
 * XREFs of MmAllocateIndependentPages @ 0x14086C220
 * Callers:
 *     KeAllocateInterrupt @ 0x14032083C (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x140376A4C (KiAllocateProcessorStateInitializationParameters.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403AA170 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x140547FF4 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140A88F30 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14086C23C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
