/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1402FFAC0
 * Callers:
 *     PpmParkReportParkedCores @ 0x140235F70 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14023A7D0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14023A820 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x14024AC78 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140255E2C (KeSynchronizeSecurityDomain.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     KiIntSteerLogStatus @ 0x140578454 (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleInitializeConcurrency @ 0x140849A30 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8

  result = 0LL;
  if ( *a1 )
  {
    v2 = (unsigned __int64 *)(a1 + 4);
    v3 = (unsigned __int16)*a1;
    do
    {
      v4 = *v2++;
      result = ((unsigned int)((0x101010101010101LL
                              * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
             + (unsigned int)result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
