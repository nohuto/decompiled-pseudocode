/*
 * XREFs of CempLockReleaseExclusive @ 0x180052FA4
 * Callers:
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 *     CrmRegistrationReadyQueueAdd @ 0x18002A040 (CrmRegistrationReadyQueueAdd.c)
 *     CrmActivityCleanup @ 0x18002CF40 (CrmActivityCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockReleaseExclusive(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
