/*
 * XREFs of RaidAdapterRequestTimerDeferred @ 0x1C0037978
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterRequestTimerDeferred(__int64 a1, __int64 a2, int a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1088), 134684676, 134684677) != 134684677
    || a1 == -1072 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1104) = 1;
    *(_QWORD *)(a1 + 1112) = a2;
    *(_DWORD *)(a1 + 1120) = a3;
    RaidQueueDeferredItem((char *)(a1 + 944), (struct _SLIST_ENTRY *)(a1 + 1072));
    return 1;
  }
}
