/*
 * XREFs of ExpAllocateHandleTable @ 0x1407B088C
 * Callers:
 *     ExDupHandleTable @ 0x1407B02CC (ExDupHandleTable.c)
 *     ExCreateHandleTable @ 0x1407B07B8 (ExCreateHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1407B0A5C (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1407B0B80 (ExpAllocateLowLevelTable.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1407B0C20 (PsChargeProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateHandleTable(struct _KPROCESS *a1, char a2)
{
  __int64 Pool2; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 LowLevelTable; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 result; // rax

  Pool2 = ExAllocatePool2(264LL, (unsigned int)((ExpFreeListCount + 1) << 6), 1651794511LL);
  if ( !Pool2 )
    return 0LL;
  if ( a1 && (int)PsChargeProcessPagedPoolQuota(a1) < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x6274624Fu);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 16) = a1;
  v5 = (unsigned int)ExpFreeListCount;
  *(_DWORD *)(Pool2 + 40) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  if ( (_DWORD)v5 )
  {
    v6 = (_QWORD *)(Pool2 + 64);
    do
    {
      *v6 = 0LL;
      v6 += 8;
      --v5;
    }
    while ( v5 );
  }
  LowLevelTable = ExpAllocateLowLevelTable(Pool2, 0LL);
  v9 = LowLevelTable;
  if ( !LowLevelTable )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x6274624Fu);
    if ( a1 )
      PsReturnProcessPagedPoolQuota(a1, 128LL);
    return 0LL;
  }
  LOBYTE(v8) = a2;
  ExpInsertLowLevelTableIntoFreeList(Pool2, LowLevelTable, Pool2 + 64, v8);
  *(_QWORD *)(Pool2 + 8) = v9;
  if ( a1 )
    *(_BYTE *)(Pool2 + 44) |= 0x10u;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  result = Pool2;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  return result;
}
