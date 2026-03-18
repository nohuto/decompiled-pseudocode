/*
 * XREFs of MmIsSessionLeaderProcess @ 0x1407A9BA0
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x1407A9A80 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 MmIsSessionLeaderProcess()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[109];
}
