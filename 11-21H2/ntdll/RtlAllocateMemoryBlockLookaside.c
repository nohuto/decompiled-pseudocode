/*
 * XREFs of RtlAllocateMemoryBlockLookaside @ 0x18012B010
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180116598 (RtlpInitializeStackTraceLog.c)
 *     RtlpRegisterStackTrace @ 0x180117A64 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180075EA0 (RtlInitializeSListHead.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 *     RtlAllocateMemoryZone @ 0x18012B120 (RtlAllocateMemoryZone.c)
 */

__int64 __fastcall RtlAllocateMemoryBlockLookaside(__int64 a1, unsigned __int64 a2, PSLIST_ENTRY *a3)
{
  unsigned __int64 v6; // rax
  union _SLIST_HEADER *v7; // rbx
  PSLIST_ENTRY v8; // rax
  struct _SLIST_ENTRY *v9; // rcx
  PSLIST_ENTRY v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  PSLIST_ENTRY v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > *(_QWORD *)(a1 + 32) )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (union _SLIST_HEADER *)(a1 + 48);
  while ( v6 < a2 )
  {
    v7 += 2;
    v6 *= 2LL;
  }
  v8 = RtlpInterlockedPopEntrySList(v7);
  v9 = v8;
  if ( v8 )
  {
    if ( ((unsigned __int8)v8 & 7) == 0
      && (union _SLIST_HEADER *)v8[2].Next == v7
      && v8[1].Next == (_SLIST_ENTRY *)v7[1].Alignment )
    {
      goto LABEL_9;
    }
    RtlInitializeSListHead(v7);
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v7[1].Alignment + 64;
  v16 = 0LL;
  if ( (int)RtlAllocateMemoryZone(v12, v13, &v16) >= 0 )
  {
    v9 = (struct _SLIST_ENTRY *)((v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[2].Next = (_SLIST_ENTRY *)v7;
    v9[1].Next = (_SLIST_ENTRY *)v7[1].Alignment;
LABEL_9:
    *((_QWORD *)&v9[1].Next + 1) = a2;
    v10 = v9 + 3;
    goto LABEL_10;
  }
  v14 = 32LL * *(unsigned int *)(a1 + 40) + a1 + 48;
  while ( 1 )
  {
    if ( (unsigned __int64)v7 >= v14 )
      return 3221225626LL;
    v15 = RtlpInterlockedPopEntrySList(v7);
    if ( v15 )
      break;
LABEL_16:
    v7 += 2;
  }
  if ( ((unsigned __int8)v15 & 7) != 0
    || (union _SLIST_HEADER *)v15[2].Next != v7
    || v15[1].Next != (_SLIST_ENTRY *)v7[1].Alignment )
  {
    RtlInitializeSListHead(v7);
    goto LABEL_16;
  }
  *((_QWORD *)&v15[1].Next + 1) = a2;
  v10 = v15 + 3;
LABEL_10:
  *a3 = v10;
  return 0LL;
}
