/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402C02B0
 * Callers:
 *     KiSendFreeze @ 0x14020D150 (KiSendFreeze.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiIpiSetTargetAffinity @ 0x1402544F4 (KiIpiSetTargetAffinity.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256E80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiCheckKeepAlive @ 0x1402BFF4C (KiCheckKeepAlive.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C003C (KeFlushProcessWriteBuffers.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1402EB340 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB4C4 (KxFlushNonGlobalTb.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EE10 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeSecurityDomain @ 0x140356984 (KeSynchronizeSecurityDomain.c)
 *     PpmParkUnblockIdle @ 0x140356C10 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x1403608FC (KeSynchronizeAddressPolicy.c)
 *     KxFlushMultipleTb @ 0x140390494 (KxFlushMultipleTb.c)
 *     KxFlushEntireTb @ 0x1403B2AAC (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403CB6E0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x14051BD50 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A7BC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059C604 (PpmParkComputeUnparkMask.c)
 *     RtlUpdateSwapReference @ 0x14080E0D8 (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E4134 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x140A9D904 (PnprQuiesceProcessors.c)
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
