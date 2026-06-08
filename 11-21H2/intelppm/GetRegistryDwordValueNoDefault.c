/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C002AC80
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x1C00299AC (ProcLibTraceSummary2.c)
 *     GetRegistryDwordValue @ 0x1C002A9A0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002AD00 (GetRegistryQwordValue.c)
 *     InitPkgIdleStateStats @ 0x1C0033330 (InitPkgIdleStateStats.c)
 *     InitPerfFeedbackInternal @ 0x1C003D464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003D774 (InitPerfStatesInternal.c)
 *     ReadPowerCurve @ 0x1C004613C (ReadPowerCurve.c)
 *     ReadEnergyEquation @ 0x1C0046FE0 (ReadEnergyEquation.c)
 *     PopulateEnergyEstimationModel @ 0x1C00470B8 (PopulateEnergyEstimationModel.c)
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 * Callees:
 *     memset @ 0x1C0003A00 (memset.c)
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
