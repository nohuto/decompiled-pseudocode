/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x14039234C
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140357FF0 (PpmParkCalculateUnparkCount.c)
 *     PpmParkRegisterParking @ 0x140391AA0 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596960 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140256020 (Feature_MultiCoreClasses__private_IsEnabledPreCheck.c)
 */

bool __fastcall PpmHeteroIsMultiClassParkingEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_IsEnabledPreCheck(a1, a2);
  return PpmHeteroMultiClassParkingEnabled != 0;
}
