/*
 * XREFs of ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C4F50
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C00216F0 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C4924 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1C01406C0 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

void __fastcall ndisReleaseStackTrace(ULONG_PTR Signature)
{
  ULONG_PTR v1; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v2; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v3; // rbx
  int v4; // r8d
  KAcquireSpinLock v5; // [rsp+20h] [rbp-38h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)Signature;
  if ( LOBYTE(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    v5.m_lock = (KSpinLockBase *)&WPP_MAIN_CB.Dpc.SystemArgument1;
    v5.m_oldIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
    if ( (_DWORD)v1 == 1 )
    {
      --LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    }
    else
    {
      memset(&Context, 0, sizeof(Context));
      v2 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v1, &Context);
      v3 = v2;
      if ( v2 )
      {
        v4 = LODWORD(v2[1].Linkage.Flink) ^ (LODWORD(v2[1].Linkage.Flink) ^ (LODWORD(v2[1].Linkage.Flink) - 1)) & 0x3FFFFFFF;
        LODWORD(v2[1].Linkage.Flink) = v4;
        if ( (v4 & 0x3FFFFFFF) == 0 )
        {
          RtlRemoveEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v2, &Context);
          ExFreePoolWithTag(v3, 0);
        }
      }
    }
    KAcquireSpinLock::~KAcquireSpinLock(&v5);
  }
}
