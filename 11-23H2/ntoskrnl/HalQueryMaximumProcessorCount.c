/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037FA40
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377200 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerRegister @ 0x140378C54 (HalpTimerRegister.c)
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 *     HalpMmReservePageTablePages @ 0x14037E70C (HalpMmReservePageTablePages.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037F9F4 (HalpMmAllocatePerProcessorMemory.c)
 *     RtlpHpHeapCreate @ 0x140388E98 (RtlpHpHeapCreate.c)
 *     HalpHvDiscover @ 0x1403A460C (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x1403CDBD0 (HalpHvTimerInitialize.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14050DB10 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14050DC70 (HalpEfiBugCheckAddPagesCallback.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     HalpInterruptGetIrtInfo @ 0x14081E840 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14081E8B0 (HalpQueryAcpiResourceRequirements.c)
 *     VfAvlInitializeTreeEx @ 0x140ABD470 (VfAvlInitializeTreeEx.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     ExInitializeHandleTablePackage @ 0x140B532AC (ExInitializeHandleTablePackage.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B69184 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x14051AF58 (HalpInterruptSetProblemEx.c)
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
