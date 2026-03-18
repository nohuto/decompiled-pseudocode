/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x1403905EC
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140357850 (PpmParkCalculateUnparkCount.c)
 *     PpmParkRegisterParking @ 0x14038FD40 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596500 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140255E40 (Feature_MultiCoreClasses__private_IsEnabledPreCheck.c)
 */

bool __fastcall PpmHeteroIsMultiClassParkingEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_IsEnabledPreCheck(a1, a2);
  return PpmHeteroMultiClassParkingEnabled != 0;
}
