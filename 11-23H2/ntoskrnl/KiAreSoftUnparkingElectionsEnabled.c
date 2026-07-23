/*
 * XREFs of KiAreSoftUnparkingElectionsEnabled @ 0x14057DFEC
 * Callers:
 *     KiShouldSoftParkElectionBePerformed @ 0x140234DF0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiChooseTargetProcessor @ 0x1402393B0 (KiChooseTargetProcessor.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14037293C (KiCanSelectSoftParkedProcessor.c)
 * Callees:
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x14041113C (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 */

bool KiAreSoftUnparkingElectionsEnabled()
{
  if ( (KiHeteroSchedulerOptionsMask & 0x10) != 0 )
    return (KiHeteroSchedulerOptions & 0x10) != 0;
  Feature_SoftParkingElections__private_ReportDeviceUsage();
  return 1;
}
