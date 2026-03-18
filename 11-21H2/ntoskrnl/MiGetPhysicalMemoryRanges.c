/*
 * XREFs of MiGetPhysicalMemoryRanges @ 0x1408525D8
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x14022B0E0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14023502C (MiLockDynamicMemoryShared.c)
 *     MiDereferencePageRuns @ 0x14023FCF0 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiGetFileOnlyRanges @ 0x140582B18 (MiGetFileOnlyRanges.c)
 *     MiMakePartitionMemoryBlock @ 0x140981F58 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetPhysicalMemoryRanges(ULONG_PTR *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rsi
  int v6; // edi
  unsigned int *v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  char *v10; // r15
  _QWORD *Pool; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rax
  char *FileOnlyRanges; // rax
  size_t v18; // rsi
  char v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v19 = 0;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 || a1 != &MiSystemPartition )
  {
    v19 = 1;
    MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
    if ( a1 != &MiSystemPartition )
    {
      while ( a1[2090] && !a1[12] )
      {
        MiUnlockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
        MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
        if ( a1[2090] )
        {
          if ( !a1[12] )
          {
            MiMakePartitionMemoryBlock(a1);
            if ( a1[2090] )
            {
              if ( !a1[12] )
              {
                MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
                return 0LL;
              }
            }
          }
        }
        MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
        MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
      }
    }
  }
  v7 = (unsigned int *)MiReferencePageRuns((__int64)a1, 0);
  v8 = (__int64)v7;
  if ( v7 )
    v9 = *v7 & (unsigned __int64)-(__int64)(a1[2090] != 0);
  else
    v9 = 0LL;
  v20 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    FileOnlyRanges = MiGetFileOnlyRanges((__int16 *)a1, a2, &v20);
    v3 = v20;
    v10 = FileOnlyRanges;
  }
  Pool = MiAllocatePool(64, 16 * (v3 + v9 + 1), 0x68506D4Du);
  v12 = Pool;
  if ( Pool )
  {
    v13 = Pool;
    if ( v9 )
    {
      v14 = (__int64 *)(v8 + 24);
      do
      {
        *v13 = *(v14 - 1) << 12;
        v15 = *v14;
        v14 += 2;
        v13[1] = v15 << 12;
        v13 += 2;
        --v9;
      }
      while ( v9 );
    }
    if ( v3 )
    {
      v18 = 16 * v3;
      memmove(v13, v10, v18);
      v13 = (_QWORD *)((char *)v13 + v18);
    }
    *v13 = 0LL;
    v13[1] = 0LL;
  }
  if ( v19 )
    MiUnlockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
  if ( v8 )
    MiDereferencePageRuns(v8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
