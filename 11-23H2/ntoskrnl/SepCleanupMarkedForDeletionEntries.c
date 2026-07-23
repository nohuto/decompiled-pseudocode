/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x14036FBCC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1406B7850 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x140226668 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlEnumerateEntryHashTable @ 0x14036FD00 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14036FE20 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14036FE80 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14036FED0 (RtlInitEnumerationHashTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  unsigned __int64 v8; // rbp
  _BYTE *v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rax
  unsigned int *v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v10 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v11 = (unsigned int *)v10;
    if ( !v10 )
      break;
    if ( LOBYTE(v10[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v10, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v11[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v7 = (_DWORD *)*((_QWORD *)v2 + 2);
        *((_QWORD *)v2 + 1) = 0LL;
        v8 = v3;
        if ( v7 )
        {
          AuthzBasepFreeSecurityAttributesList(v7, v4, v5, v6);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v8 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
      v9 = (_BYTE *)(*(_QWORD *)(SeLuidToIndexMapping + 24) + ((unsigned __int64)v11[10] >> 3));
      *v9 &= ~(1 << (v11[10] & 7));
      ExFreePoolWithTag(v11, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
