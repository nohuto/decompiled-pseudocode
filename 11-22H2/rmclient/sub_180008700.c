/*
 * XREFs of sub_180008700 @ 0x180008700
 * Callers:
 *     CrmActivityFree @ 0x1800086C0 (CrmActivityFree.c)
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 * Callees:
 *     CrmActivityWindowClosedReasonUnsubscribe_0 @ 0x1800087B8 (CrmActivityWindowClosedReasonUnsubscribe_0.c)
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

unsigned int __fastcall sub_180008700(_QWORD *a1)
{
  unsigned int result; // eax
  void *v3; // rcx
  __int64 v4; // rdi

  result = CrmActivityWindowClosedReasonUnsubscribe_0();
  if ( a1[6] )
    result = RtlUnsubscribeWnfNotificationWaitForCompletion();
  v3 = (void *)a1[8];
  if ( v3 )
    result = CloseHandle(v3);
  if ( a1[1] != -1LL )
  {
    v4 = a1[2];
    if ( (unsigned int)sub_1800153DC(v4) )
      return (unsigned int)NdrClientCall3(
                             (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
                             4u,
                             0LL,
                             a1[1],
                             *(_QWORD *)(v4 + 8)).Pointer;
    else
      return CrmpInProcActivityFree(a1[1], *(_QWORD *)(v4 + 16));
  }
  return result;
}
