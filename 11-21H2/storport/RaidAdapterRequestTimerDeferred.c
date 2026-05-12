/*
 * XREFs of RaidAdapterRequestTimerDeferred @ 0x1C00365FC
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterRequestTimerDeferred(__int64 a1, __int64 a2, int a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1024), 134684676, 134684677) != 134684677
    || a1 == -1008 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1040) = 1;
    *(_QWORD *)(a1 + 1048) = a2;
    *(_DWORD *)(a1 + 1056) = a3;
    RaidQueueDeferredItem((char *)(a1 + 880), (struct _SLIST_ENTRY *)(a1 + 1008));
    return 1;
  }
}
