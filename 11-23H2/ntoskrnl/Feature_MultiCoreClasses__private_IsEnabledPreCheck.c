/*
 * XREFs of Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140255F60
 * Callers:
 *     PpmPerfSnapUtility @ 0x140255B10 (PpmPerfSnapUtility.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x14039216C (PpmHeteroIsMultiClassParkingEnabled.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x1404102E0 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

__int64 __fastcall Feature_MultiCoreClasses__private_IsEnabledPreCheck(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return 1LL;
}
