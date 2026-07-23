/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x1800888D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C57C (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*((char **)Callback + 3), Callback, &v2);
}
