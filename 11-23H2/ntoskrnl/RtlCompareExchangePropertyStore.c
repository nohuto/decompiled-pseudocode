/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x1405AAA20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     bsearch @ 0x1403D9FE0 (bsearch.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405AB220 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // ebp
  void *v5; // r13
  _OWORD *i; // rsi
  unsigned __int64 v8; // rdi
  char *v9; // rax
  char *Pool2; // rbx
  int v11; // r14d
  unsigned int v12; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  void *v22; // rbp
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  NTSTATUS v26; // ebx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax

  v4 = 0;
  v5 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    v8 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    if ( RtlpPropStoreEntries )
    {
      v9 = (char *)bsearch(
                     i,
                     RtlpPropStoreEntries,
                     (unsigned int)RtlpPropStoreEntriesActiveCount,
                     0x18uLL,
                     RtlpComparePropertyEntry);
      if ( v9 )
        break;
    }
    if ( (unsigned __int8)v8 > 2u )
    {
      v26 = -1073741670;
      goto LABEL_42;
    }
    Pool2 = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries && (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
      goto LABEL_28;
    v11 = RtlpPropStoreEntriesTotalCount;
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v12 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_40;
    }
    else
    {
      v12 = 16;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    Pool2 = (char *)ExAllocatePool2(64LL, 24LL * v12, 1886539858LL);
    if ( !Pool2 )
    {
LABEL_40:
      v26 = -1073741801;
      goto LABEL_42;
    }
    v8 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v22 = RtlpPropStoreEntries;
      if ( RtlpPropStoreEntries )
      {
        memmove(Pool2, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v5 = v22;
      }
      RtlpPropStoreEntriesTotalCount = v12;
      i = (_OWORD *)Key;
      RtlpPropStoreEntries = Pool2;
LABEL_28:
      v23 = 3LL * (unsigned int)RtlpPropStoreEntriesActiveCount;
      LODWORD(RtlpPropStoreEntriesActiveCount) = RtlpPropStoreEntriesActiveCount + 1;
      v9 = &Pool2[8 * v23];
      if ( Exchange )
        v24 = *Exchange;
      else
        v24 = 0LL;
      *((_QWORD *)v9 + 2) = v24;
      v4 = 1;
      *(_OWORD *)v9 = *i;
      break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    __writecr8(v8);
    ExFreePoolWithTag(Pool2, 0);
  }
  v25 = *((_QWORD *)v9 + 2);
  if ( !Exchange || v25 == *Exchange )
    *((_QWORD *)v9 + 2) = Comperand;
  if ( Context )
    *Context = v25;
  if ( v4 )
  {
    qsort(RtlpPropStoreEntries, (unsigned int)RtlpPropStoreEntriesActiveCount, 0x18uLL, RtlpComparePropertyEntry);
    v26 = 0;
  }
  else
  {
    v26 = 0x40000000;
  }
LABEL_42:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPropStoreLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v17 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
  }
  __writecr8((unsigned __int8)v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v26;
}
