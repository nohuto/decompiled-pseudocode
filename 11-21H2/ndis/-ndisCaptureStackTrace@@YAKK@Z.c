/*
 * XREFs of ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C0064
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0020020 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C0264 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 */

__int64 __fastcall ndisCaptureStackTrace()
{
  USHORT v1; // ax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  PVOID *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rax
  struct _NDIS_STACK_TRACE *v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  __int64 Pool2; // rax
  struct _NDIS_STACK_TRACE *v12; // [rsp+20h] [rbp-60h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-58h] BYREF
  KAcquireSpinLock v14; // [rsp+40h] [rbp-40h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]

  Context.Signature = 0LL;
  if ( !LOBYTE(WPP_MAIN_CB.Dpc.SystemArgument2) )
    return 0LL;
  *(_OWORD *)&Context.ChainHead = 0LL;
  v1 = RtlCaptureStackBackTrace(3u, 4u, BackTrace, 0LL);
  v2 = 0;
  v3 = 1;
  if ( !v1 )
    goto LABEL_7;
  v4 = BackTrace;
  v5 = v1;
  do
  {
    v2 ^= *(_DWORD *)v4++;
    --v5;
  }
  while ( v5 );
  if ( v2 <= 1 )
LABEL_7:
    v2 = 2;
  v6 = v2 & 0x3FFFFFF;
  if ( v1 < 4u )
    memset(&BackTrace[v1], 0, 8LL * (4 - (unsigned int)v1));
  v14.m_lock = (KSpinLockBase *)&WPP_MAIN_CB.Dpc.SystemArgument1;
  v14.m_oldIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
  v7 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v6, &Context);
  v12 = (struct _NDIS_STACK_TRACE *)v7;
  v8 = (struct _NDIS_STACK_TRACE *)v7;
  if ( !v7 )
    goto LABEL_19;
  v9 = 0;
  v10 = (LODWORD(v7[1].Linkage.Flink) >> 30) + 1;
  if ( LODWORD(v7[1].Linkage.Flink) >> 30 != -1 )
  {
    while ( memcmp((char *)v8 + 32 * v9 + 32, BackTrace, 0x20uLL) )
    {
      if ( ++v9 >= v10 )
        goto LABEL_14;
    }
LABEL_17:
    if ( v8 )
    {
      *((_DWORD *)v8 + 6) ^= (*((_DWORD *)v8 + 6) ^ (*((_DWORD *)v8 + 6) + 1)) & 0x3FFFFFFF;
LABEL_22:
      v3 = v6;
      goto LABEL_23;
    }
LABEL_19:
    Pool2 = ExAllocatePool2(64LL, 64LL, 1802716238);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = 1;
      *(_OWORD *)(Pool2 + 32) = *(_OWORD *)BackTrace;
      *(_OWORD *)(Pool2 + 48) = v16;
      RtlInsertEntryHashTable(
        (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData,
        (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2,
        v6,
        &Context);
    }
    else
    {
      ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
      v6 = 1;
    }
    goto LABEL_22;
  }
LABEL_14:
  if ( ndisExpandStackTrace(&v12, &Context, (unsigned __int64 *)BackTrace) )
  {
    v8 = v12;
    goto LABEL_17;
  }
  ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
LABEL_23:
  KAcquireSpinLock::~KAcquireSpinLock(&v14);
  return v3;
}
