/*
 * XREFs of CempRbNodeRemove @ 0x180097954
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityCleanup @ 0x18002CF70 (CrmActivityCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempRbNodeRemove(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlRbRemoveNode(a1, a2);
  *(_QWORD *)(a2 + 16) = -1LL;
  return result;
}
