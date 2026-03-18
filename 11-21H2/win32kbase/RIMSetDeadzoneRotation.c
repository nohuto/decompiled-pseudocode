/*
 * XREFs of RIMSetDeadzoneRotation @ 0x1C0188E78
 * Callers:
 *     NtRIMSetDeadzoneRotation @ 0x1C0180F90 (NtRIMSetDeadzoneRotation.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

void __fastcall RIMSetDeadzoneRotation(unsigned int a1)
{
  RIMLockExclusive((__int64)&gDeadzoneLock);
  qword_1C029A168 = 0LL;
  RIMDeadzone::s_counterClockwiseDeviceRotation = a1;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
