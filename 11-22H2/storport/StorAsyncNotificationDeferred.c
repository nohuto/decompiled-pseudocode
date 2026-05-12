/*
 * XREFs of StorAsyncNotificationDeferred @ 0x1C0044D0C
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 */

char __fastcall StorAsyncNotificationDeferred(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = a2 + 1664;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), 134684676, 134684677) != 134684677 || !v5 )
    return 0;
  *(_DWORD *)(v5 + 32) = 12;
  *(_QWORD *)(v5 + 40) = a2 + 1912;
  *(_DWORD *)(v5 + 36) = a3;
  *(_QWORD *)(a2 + 1920) = a4;
  RaidQueueDeferredItem((char *)(a1 + 944), (struct _SLIST_ENTRY *)v5);
  return 1;
}
