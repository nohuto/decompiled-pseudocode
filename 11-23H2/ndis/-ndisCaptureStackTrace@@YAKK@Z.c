/*
 * XREFs of ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C4C54
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0021880 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C4E70 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 */

__int64 __fastcall ndisCaptureStackTrace()
{
  USHORT v1; // ax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  PVOID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // edi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rax
  struct _NDIS_STACK_TRACE *v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 Pool2; // rax
  struct _NDIS_STACK_TRACE *v13; // [rsp+20h] [rbp-60h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-58h] BYREF
  KAcquireSpinLock v15; // [rsp+40h] [rbp-40h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h]

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
  v6 = v1;
  do
  {
    v2 ^= *(_DWORD *)v4++;
    --v6;
  }
  while ( v6 );
  if ( v2 <= 1 )
  {
LABEL_7:
    v2 = 2;
    v5 = v1;
  }
  v7 = v2 & 0x3FFFFFF;
  if ( v1 < 4u )
    memset(&BackTrace[v5], 0, 8LL * (4 - (unsigned int)v1));
  v15.m_lock = (KSpinLockBase *)&WPP_MAIN_CB.Dpc.SystemArgument1;
  v15.m_oldIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
  v8 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v7, &Context);
  v13 = (struct _NDIS_STACK_TRACE *)v8;
  v9 = (struct _NDIS_STACK_TRACE *)v8;
  if ( !v8 )
    goto LABEL_19;
  v10 = 0;
  v11 = (LODWORD(v8[1].Linkage.Flink) >> 30) + 1;
  if ( LODWORD(v8[1].Linkage.Flink) >> 30 != -1 )
  {
    while ( memcmp((char *)v9 + 32 * v10 + 32, BackTrace, 0x20uLL) )
    {
      if ( ++v10 >= v11 )
        goto LABEL_14;
    }
LABEL_17:
    if ( v9 )
    {
      *((_DWORD *)v9 + 6) ^= (*((_DWORD *)v9 + 6) ^ (*((_DWORD *)v9 + 6) + 1)) & 0x3FFFFFFF;
LABEL_22:
      v3 = v7;
      goto LABEL_23;
    }
LABEL_19:
    Pool2 = ExAllocatePool2(64LL, 64LL, 1802716238);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = 1;
      *(_OWORD *)(Pool2 + 32) = *(_OWORD *)BackTrace;
      *(_OWORD *)(Pool2 + 48) = v17;
      RtlInsertEntryHashTable(
        (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData,
        (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2,
        v7,
        &Context);
    }
    else
    {
      ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
      v7 = 1;
    }
    goto LABEL_22;
  }
LABEL_14:
  if ( ndisExpandStackTrace(&v13, &Context, (unsigned __int64 *)BackTrace) )
  {
    v9 = v13;
    goto LABEL_17;
  }
  ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
LABEL_23:
  KAcquireSpinLock::~KAcquireSpinLock(&v15);
  return v3;
}
