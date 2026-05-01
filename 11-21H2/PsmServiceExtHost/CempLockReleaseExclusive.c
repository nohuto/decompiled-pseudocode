/*
 * XREFs of CempLockReleaseExclusive @ 0x18009CCBC
 * Callers:
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockReleaseExclusive(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
