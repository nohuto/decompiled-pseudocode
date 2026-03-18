/*
 * XREFs of KiAreSoftUnparkingElectionsEnabled @ 0x14057DB8C
 * Callers:
 *     KiShouldSoftParkElectionBePerformed @ 0x140234D00 (KiShouldSoftParkElectionBePerformed.c)
 *     KiChooseTargetProcessor @ 0x1402392C0 (KiChooseTargetProcessor.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14037214C (KiCanSelectSoftParkedProcessor.c)
 * Callees:
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x1404105AC (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 */

bool KiAreSoftUnparkingElectionsEnabled()
{
  if ( (KiHeteroSchedulerOptionsMask & 0x10) != 0 )
    return (KiHeteroSchedulerOptions & 0x10) != 0;
  Feature_SoftParkingElections__private_ReportDeviceUsage();
  return 1;
}
