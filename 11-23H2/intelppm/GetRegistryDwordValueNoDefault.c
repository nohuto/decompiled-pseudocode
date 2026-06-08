/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C00270EC
 * Callers:
 *     GetRegistryQwordValue @ 0x1C0026FA4 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C00270C8 (GetRegistryDwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C002716C (ProcLibTraceSummary2.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     InitPkgIdleStateStats @ 0x1C00344A0 (InitPkgIdleStateStats.c)
 *     InitPerfFeedbackInternal @ 0x1C003E658 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003E964 (InitPerfStatesInternal.c)
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 *     ReadEnergyEquation @ 0x1C0048A8C (ReadEnergyEquation.c)
 *     PopulateEnergyEstimationModel @ 0x1C0048B64 (PopulateEnergyEstimationModel.c)
 *     ReadPowerCurve @ 0x1C00499A4 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C00045C0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
