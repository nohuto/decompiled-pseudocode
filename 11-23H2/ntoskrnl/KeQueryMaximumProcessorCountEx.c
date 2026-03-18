/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14033AFA0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14033AD54 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x14033AF3C (ExpGetSystemProcessorInformation.c)
 *     HalpHvInitMcaPcrContext @ 0x1403802E4 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403AB7C8 (ExpSaInitialize.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5DDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403CF36C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CFCC0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CFFCC (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1403D4EFC (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5B44 (ExpSaPageGroupDescriptorFree.c)
 *     KeQueryMaximumProcessorCount @ 0x1405707F0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140573EDC (KeStartProfile.c)
 *     PpmEventHgsHardwareTable @ 0x14059A2EC (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A4E4 (PpmEventHgsNormalizedTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140603270 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408A868C (EtwpCovSampCaptureFlushStats.c)
 *     EtwpAllocatePmcData @ 0x1409E3248 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F09FC (EtwpCovSampCaptureContextStart.c)
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
