/*
 * XREFs of CempRbNodeIsInserted @ 0x1800975E0
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityCleanup @ 0x18002CF40 (CrmActivityCleanup.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CempRbNodeIsInserted(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != -1LL;
}
