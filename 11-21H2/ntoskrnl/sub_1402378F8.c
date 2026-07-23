/*
 * XREFs of sub_1402378F8 @ 0x1402378F8
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140394080 @ 0x140394080 (sub_140394080.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall sub_1402378F8(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  SIZE_T v4; // rdx
  _SLIST_ENTRY *PoolWithTag; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 4048));
  if ( !v2 )
  {
    v4 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 4544);
    if ( (*(_DWORD *)(a1 + 856) & 0x40000) == 0 )
      v4 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 448);
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x74536D73u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v6 = ((unsigned __int64)&v2[5].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 4024) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v6;
        v6 += *(unsigned int *)(a1 + 4024);
      }
      v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)&v2[1].Next + 1) = v7;
      v8 = (v7 + 175) & 0xFFFFFFFFFFFFFFF8uLL;
      v2[2].Next = (_SLIST_ENTRY *)v8;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_DWORD *)(v7 + 24) = 0;
      *(_QWORD *)v7 = v7 + 40;
      *(_DWORD *)(v7 + 28) = 8;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_DWORD *)(v8 + 24) = 0;
      *(_QWORD *)v8 = v8 + 40;
      *(_DWORD *)(v8 + 28) = 8;
      if ( (*(_DWORD *)(a1 + 856) & 0x40000) != 0 )
        v2[3].Next = (_SLIST_ENTRY *)(v8 + 168);
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
