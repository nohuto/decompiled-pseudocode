/*
 * XREFs of KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x14023C750
 * Callers:
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14023C6B0 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall KiDpcRuntimeHistoryHashTableCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // r13
  _RTL_HASH_TABLE *DpcRuntimeHistoryHashTable; // rsi
  _SINGLE_LIST_ENTRY *Buckets; // rdi
  unsigned __int64 Next; // rbx
  unsigned __int64 *v8; // rcx
  void *v9; // r15
  _SINGLE_LIST_ENTRY *i; // rcx
  __int16 v11; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  DpcRuntimeHistoryHashTable = CurrentPrcb->DpcRuntimeHistoryHashTable;
  Buckets = DpcRuntimeHistoryHashTable->Buckets;
  Next = (unsigned __int64)Buckets;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)Next;
    if ( !Next )
      break;
    Next = *(_QWORD *)Next;
    if ( (Next & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      Next = *v8;
    if ( (Next & 1) != 0 )
      break;
LABEL_7:
    if ( !Next )
      return;
    v9 = (void *)Next;
    if ( *(_BYTE *)(Next + 24) )
    {
      *(_BYTE *)(Next + 24) = 0;
    }
    else
    {
      _disable();
      KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      for ( i = Buckets; ((__int64)i->Next & 1) == 0; i = i->Next )
      {
        if ( i->Next == (struct _SINGLE_LIST_ENTRY *)Next )
        {
          i->Next = *(struct _SINGLE_LIST_ENTRY **)Next;
          --DpcRuntimeHistoryHashTable->EntryCount;
          *(_QWORD *)Next |= 0x8000000000000002uLL;
          Next = (unsigned __int64)i;
          break;
        }
      }
      KxReleaseSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      if ( (v11 & 0x200) != 0 )
        _enable();
      ExFreePoolWithTag(v9, 0);
    }
  }
  for ( ++Buckets;
        Buckets < &DpcRuntimeHistoryHashTable->Buckets[(unsigned __int64)*((unsigned int *)DpcRuntimeHistoryHashTable + 1) >> 5];
        ++Buckets )
  {
    Next = (unsigned __int64)Buckets->Next;
    if ( ((__int64)Buckets->Next & 1) == 0 )
      goto LABEL_7;
  }
}
