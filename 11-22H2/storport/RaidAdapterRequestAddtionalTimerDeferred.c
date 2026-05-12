/*
 * XREFs of RaidAdapterRequestAddtionalTimerDeferred @ 0x1C00142FC
 * Callers:
 *     StorpRequestTimer @ 0x1C000D7FC (StorpRequestTimer.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 */

__int64 __fastcall RaidAdapterRequestAddtionalTimerDeferred(
        union _SLIST_HEADER *a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        int a4)
{
  PSLIST_ENTRY v8; // rax

  v8 = ExpInterlockedPopEntrySList(a1 + 64);
  if ( v8 )
  {
    LODWORD(v8[1].Next) = 134684674;
    LODWORD(v8[2].Next) = 11;
    *((_QWORD *)&v8[2].Next + 1) = a2;
    v8[3].Next = a3;
    *((_DWORD *)&v8[3].Next + 2) = a4;
    RaidQueueDeferredItem(&a1[59]);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 3238002691LL;
  }
}
