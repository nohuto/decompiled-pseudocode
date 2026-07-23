/*
 * XREFs of RtlAllocateMemoryBlockLookaside @ 0x180131010
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180117E08 (RtlpInitializeStackTraceLog.c)
 *     RtlpRegisterStackTrace @ 0x180119350 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180070F90 (RtlInitializeSListHead.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlAllocateMemoryZone @ 0x1801310F0 (RtlAllocateMemoryZone.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlAllocateMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG BlockSize, PVOID *Block)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rax
  _SLIST_HEADER *v7; // rbx
  PSLIST_ENTRY v8; // rax
  _SLIST_ENTRY *v9; // rcx
  _SLIST_ENTRY *v10; // rax
  void *v12; // rcx
  SIZE_T v13; // rdx
  _SLIST_HEADER *v14; // rsi
  PSLIST_ENTRY v15; // rax
  PVOID Blocka; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&BlockSize;
  if ( *(_QWORD *)&BlockSize > *((_QWORD *)MemoryBlockLookaside + 4) )
    return -1073741811;
  v6 = *((_QWORD *)MemoryBlockLookaside + 3);
  v7 = (_SLIST_HEADER *)((char *)MemoryBlockLookaside + 48);
  while ( v6 < *(_QWORD *)&BlockSize )
  {
    v7 += 2;
    v6 *= 2LL;
  }
  v8 = RtlpInterlockedPopEntrySList(v7);
  v9 = v8;
  if ( v8 )
  {
    if ( ((unsigned __int8)v8 & 7) == 0
      && (_SLIST_HEADER *)v8[2].Next == v7
      && v8[1].Next == (_SLIST_ENTRY *)v7[1].Alignment )
    {
LABEL_9:
      *((_QWORD *)&v9[1].Next + 1) = v4;
      v10 = v9 + 3;
LABEL_10:
      *Block = v10;
      return 0;
    }
    RtlInitializeSListHead(v7);
  }
  v12 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
  v13 = v7[1].Alignment + 64;
  Blocka = 0LL;
  if ( RtlAllocateMemoryZone(v12, v13, &Blocka) >= 0 )
  {
    v9 = (_SLIST_ENTRY *)(((unsigned __int64)Blocka + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[2].Next = (_SLIST_ENTRY *)v7;
    v9[1].Next = (_SLIST_ENTRY *)v7[1].Alignment;
    goto LABEL_9;
  }
  v14 = (_SLIST_HEADER *)((char *)MemoryBlockLookaside + 32 * *((unsigned int *)MemoryBlockLookaside + 10) + 48);
  while ( v7 < v14 )
  {
    v15 = RtlpInterlockedPopEntrySList(v7);
    if ( v15 )
    {
      if ( ((unsigned __int8)v15 & 7) == 0
        && (_SLIST_HEADER *)v15[2].Next == v7
        && v15[1].Next == (_SLIST_ENTRY *)v7[1].Alignment )
      {
        *((_QWORD *)&v15[1].Next + 1) = v4;
        v10 = v15 + 3;
        goto LABEL_10;
      }
      RtlInitializeSListHead(v7);
    }
    v7 += 2;
  }
  return -1073741670;
}
