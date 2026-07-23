/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402C0540
 * Callers:
 *     KiSendFreeze @ 0x14020D150 (KiSendFreeze.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiIpiSetTargetAffinity @ 0x1402545B4 (KiIpiSetTargetAffinity.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiCheckKeepAlive @ 0x1402C01DC (KiCheckKeepAlive.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1402EB5D0 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB754 (KxFlushNonGlobalTb.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EFB0 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeSecurityDomain @ 0x140356B24 (KeSynchronizeSecurityDomain.c)
 *     PpmParkUnblockIdle @ 0x140356DB0 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x140360A9C (KeSynchronizeAddressPolicy.c)
 *     KxFlushMultipleTb @ 0x140390674 (KxFlushMultipleTb.c)
 *     KxFlushEntireTb @ 0x1403B2C8C (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x14051C2A0 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     PpmUnlockProcessors @ 0x140586658 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059CAF4 (PpmParkComputeUnparkMask.c)
 *     RtlUpdateSwapReference @ 0x14080E3A8 (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E43C4 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
