/*
 * XREFs of sub_18001C19C @ 0x18001C19C
 * Callers:
 *     sub_18001C200 @ 0x18001C200 (sub_18001C200.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall sub_18001C19C(__int64 a1)
{
  *(_QWORD *)a1 = &off_180020750;
  if ( *(_QWORD *)(a1 + 56) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *(_QWORD *)(a1 + 64) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return RpcBindingFree((RPC_BINDING_HANDLE *)(a1 + 16));
}
