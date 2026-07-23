/*
 * XREFs of HalpMmAllocateMemory @ 0x14037D880
 * Callers:
 *     EmonInitializeProfiling @ 0x140A896A0 (EmonInitializeProfiling.c)
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     Amd64InitializeProfiling @ 0x140A985F0 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140AB2060 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140AB22D0 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037DCA8 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
