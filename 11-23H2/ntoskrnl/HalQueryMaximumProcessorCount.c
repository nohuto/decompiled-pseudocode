/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037F8A0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377060 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerRegister @ 0x140378AB4 (HalpTimerRegister.c)
 *     HalpTimerInitSystem @ 0x14037AA30 (HalpTimerInitSystem.c)
 *     HalpMmReservePageTablePages @ 0x14037E56C (HalpMmReservePageTablePages.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037F854 (HalpMmAllocatePerProcessorMemory.c)
 *     RtlpHpHeapCreate @ 0x140388CB8 (RtlpHpHeapCreate.c)
 *     HalpHvDiscover @ 0x1403A442C (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x1403CD9F0 (HalpHvTimerInitialize.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14050D5C0 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14050D720 (HalpEfiBugCheckAddPagesCallback.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     HalpInterruptGetIrtInfo @ 0x14081E570 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14081E5E0 (HalpQueryAcpiResourceRequirements.c)
 *     VfAvlInitializeTreeEx @ 0x140ABD480 (VfAvlInitializeTreeEx.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     ExInitializeHandleTablePackage @ 0x140B532AC (ExInitializeHandleTablePackage.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B69184 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FADC (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x14051AA08 (HalpInterruptSetProblemEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  int v0; // eax
  unsigned int v1; // r8d
  unsigned int v2; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0, 11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 726);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  v0 = HalpInterruptModel();
  if ( (v0 == 1 || v0 == 2 || (unsigned int)(v0 - 3) <= 1) && HalpNumaConfig )
    v2 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v2 < v1 )
    return v1;
  return v2;
}
