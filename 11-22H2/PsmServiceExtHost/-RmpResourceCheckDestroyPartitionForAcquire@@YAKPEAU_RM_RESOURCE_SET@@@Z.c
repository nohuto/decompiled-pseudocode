/*
 * XREFs of ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180011FDC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000B420 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050828 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180032A04 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800468A8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004699C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800504D0 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z @ 0x180085D40 (-RmpPartitionTableFindActivePartition@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAX@Z.c)
 *     ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180085DC0 (-RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 */

__int64 __fastcall RmpResourceCheckDestroyPartitionForAcquire(struct _RM_RESOURCE_SET *a1, __int64 a2, unsigned int a3)
{
  void *v3; // rsi
  unsigned int v4; // ebx
  __int64 v7; // r14
  struct _RM_PARTITION *ActivePartition; // rax
  struct _RM_PARTITION *v9; // rdi
  __int64 v10; // rcx
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_OBJECT_HEADER *v12; // rdi
  int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v3 = (void *)*((_QWORD *)a1 + 7);
  v4 = 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 1320LL) + 48LL);
    if ( RmpPartitionTablePartitionExists((struct _RM_PARTITION_TABLE *)(v7 + 312), *((void **)a1 + 7), a3) )
    {
      ActivePartition = RmpPartitionTableFindActivePartition((struct _RM_PARTITION_TABLE *)(v7 + 312), v3);
      v9 = ActivePartition;
      if ( ActivePartition )
      {
        RmpPartitionRevokeAllSets(ActivePartition);
        RmpPartitionRelease(v9);
      }
      return 1;
    }
    else
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_OBJECT_TABLE *)(v7 + 536),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v15);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v15);
        v12 = Next;
        if ( !Next )
          break;
        v10 = *((_QWORD *)Next + 7);
        if ( v10 && Next != a1 && (int)NtCompareObjects(v10, v3) >= 0 )
        {
          NtClose(*((HANDLE *)v12 + 7));
          *((_QWORD *)v12 + 7) = 0LL;
        }
        RmpObjectRelease(v12);
      }
      RtlReleaseSRWLockShared(v15.Ptr + 16);
      NtClose(v3);
      *((_QWORD *)a1 + 7) = 0LL;
      if ( (unsigned int)dword_1800DB1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 9LL) )
      {
        v14 = *((_QWORD *)a1 + 4);
        v17 = 8LL;
        v16 = &v14;
        tlgWriteTransfer_EventWriteTransfer(v13, (int)&dword_1800C57E3, 0, 0, 3u, &v15);
      }
    }
  }
  return v4;
}
