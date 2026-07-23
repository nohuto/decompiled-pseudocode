/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1402C0450
 * Callers:
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EFB0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x140350F60 (PpmParkReportParkedCores.c)
 *     KeSynchronizeSecurityDomain @ 0x140356B24 (KeSynchronizeSecurityDomain.c)
 *     PpmParkUnblockIdle @ 0x140356DB0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140356E00 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeAddressPolicy @ 0x140360A9C (KeSynchronizeAddressPolicy.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D4B4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E9CC (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmIdleInitializeConcurrency @ 0x14082C104 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140A8D0F8 (KiInitializeTopologyStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( (_WORD)v1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
