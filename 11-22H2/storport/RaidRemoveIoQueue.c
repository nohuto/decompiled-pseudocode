/*
 * XREFs of RaidRemoveIoQueue @ 0x1C0021C14
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1C001D304 (RaidUnitCancelPendingRequests.c)
 *     RaUnitDisableDeviceIrp @ 0x1C005DB38 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C005DBC4 (RaUnitFlushQueueSrb.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0006980 (RiPeekDeviceQueue.c)
 *     RiDecrementDeviceQueueCount @ 0x1C0006A0C (RiDecrementDeviceQueueCount.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00207F4 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 __fastcall RaidRemoveIoQueue(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v2; // r14
  union _SLIST_HEADER *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 Alignment; // rcx
  _QWORD *Region; // rax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  v1 = a1 + 16;
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)v1);
  v3 = RiPeekDeviceQueue((union _SLIST_HEADER *)v1);
  v4 = 0LL;
  v5 = (__int64)v3;
  if ( v3 )
  {
    if ( *(_QWORD *)(v1 + 144) == v1 + 144 )
    {
      ExpInterlockedPopEntrySList((PSLIST_HEADER)(v1 + 112));
    }
    else
    {
      Alignment = v3->Alignment;
      if ( *(union _SLIST_HEADER **)(v3->Alignment + 8) != v3 )
        goto LABEL_14;
      Region = (_QWORD *)v3->Region;
      if ( *Region != v5 )
        goto LABEL_14;
      *Region = Alignment;
      *(_QWORD *)(Alignment + 8) = Region;
    }
    if ( (*(_BYTE *)(v5 + 22) & 0x20) == 0 )
    {
LABEL_13:
      *(_BYTE *)(v5 + 20) &= 0xFCu;
      RiDecrementDeviceQueueCount(v1, v5);
      goto LABEL_2;
    }
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5);
    v10 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v11 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v11 == QosEntryForDeviceEntry )
      {
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        goto LABEL_13;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
LABEL_2:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v2);
  if ( v5 )
  {
    v4 = v5 - 120;
    v12 = *(_QWORD *)(*(_QWORD *)(v5 - 120 + 184) + 8LL);
    if ( *(_BYTE *)(v12 + 2) != 40 )
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v12 + 40);
  }
  return v4;
}
