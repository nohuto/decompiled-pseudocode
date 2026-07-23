/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18005A4B0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800596D0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCtContextFree @ 0x18010EE38 (RtlpCtContextFree.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWaitOnAddress @ 0x18005B350 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)a1 + 11) = &v2;
  RtlpRemoveUserSubFromNameSub(*((PVOID *)a1 + 3), a1);
  do
  {
    if ( byte_18017A188 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCycleCount);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
