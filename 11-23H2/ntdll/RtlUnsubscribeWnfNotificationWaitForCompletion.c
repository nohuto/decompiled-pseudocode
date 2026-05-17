/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18004C510
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180060B50 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCtContextFree @ 0x180110518 (RtlpCtContextFree.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C57C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWaitOnAddress @ 0x18004FE64 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF
  char v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v4);
  do
  {
    if ( byte_180187488 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCycleCount);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
