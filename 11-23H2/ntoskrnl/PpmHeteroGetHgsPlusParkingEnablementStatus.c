/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x140392418
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x140411424 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
 */

bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // bl

  v0 = 0;
  Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage();
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
