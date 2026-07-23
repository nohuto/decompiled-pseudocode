/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14033B230
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14033AFE4 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x14033B1CC (ExpGetSystemProcessorInformation.c)
 *     HalpHvInitMcaPcrContext @ 0x140380484 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403AB9A8 (ExpSaInitialize.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5FBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403CF54C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CFEA0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403D01AC (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1403D50DC (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5D24 (ExpSaPageGroupDescriptorFree.c)
 *     KeQueryMaximumProcessorCount @ 0x140570D30 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14057441C (KeStartProfile.c)
 *     PpmEventHgsHardwareTable @ 0x14059A7DC (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A9D4 (PpmEventHgsNormalizedTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406037C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408A88DC (EtwpCovSampCaptureFlushStats.c)
 *     EtwpAllocatePmcData @ 0x1409E34D8 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 *     ExpInitSystemPhase1 @ 0x140B49FE4 (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140B609CC (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140B6B34C (PpmInitHeteroEngine.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rcx
  unsigned __int64 v3; // rax

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else
  {
    if ( GroupNumber == 0xFFFF )
    {
      LODWORD(v1) = KeNumberProcessors_0;
    }
    else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
    {
      LODWORD(v1) = 0;
    }
    else
    {
      v3 = qword_140D1EFF8[GroupNumber] - (((unsigned __int64)qword_140D1EFF8[GroupNumber] >> 1) & 0x5555555555555555LL);
      return (0x101010101010101LL
            * (((v3 & 0x3333333333333333LL)
              + ((v3 >> 2) & 0x3333333333333333LL)
              + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
    return v1;
  }
}
