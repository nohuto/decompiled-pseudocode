/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x14039216C
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140357E50 (PpmParkCalculateUnparkCount.c)
 *     PpmParkRegisterParking @ 0x1403918C0 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596470 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140255F60 (Feature_MultiCoreClasses__private_IsEnabledPreCheck.c)
 */

bool __fastcall PpmHeteroIsMultiClassParkingEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_IsEnabledPreCheck(a1, a2);
  return PpmHeteroMultiClassParkingEnabled != 0;
}
