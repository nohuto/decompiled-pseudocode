/*
 * XREFs of KeInitializeTimer2 @ 0x14031E790
 * Callers:
 *     NtCreateWorkerFactory @ 0x140785D80 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140786370 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140823B50 (PopThermalZoneAdd.c)
 *     PopInitializeTimer @ 0x140848B88 (PopInitializeTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x140849C90 (ExpWorkQueueManagerInitialize.c)
 *     EtwpCoverageEnsureContext @ 0x140856D14 (EtwpCoverageEnsureContext.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140860DD4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
