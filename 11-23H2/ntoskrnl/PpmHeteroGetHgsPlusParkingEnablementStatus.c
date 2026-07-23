/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1403925F8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x140411630 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
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
