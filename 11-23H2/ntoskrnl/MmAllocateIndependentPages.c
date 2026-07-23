/*
 * XREFs of MmAllocateIndependentPages @ 0x14086C460
 * Callers:
 *     KeAllocateInterrupt @ 0x140320ACC (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x140376BEC (KiAllocateProcessorStateInitializationParameters.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403AA350 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1405486B4 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140A88F30 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
