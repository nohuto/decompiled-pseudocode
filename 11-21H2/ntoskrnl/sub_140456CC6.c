/*
 * XREFs of sub_140456CC6 @ 0x140456CC6
 * Callers:
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513F84 @ 0x140513F84 (sub_140513F84.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

unsigned __int64 __fastcall sub_140456CC6(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ecx
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  struct _MDL *v12; // rbp
  int v13; // ecx
  struct _MDL *v14; // r8
  __int64 v15; // r9
  PSLIST_ENTRY v16; // rbx
  char v17; // r15
  bool v18; // zf
  PSLIST_ENTRY v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r9d
  int v24; // edx
  __int64 *v25; // r8
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  result = 0LL;
  v5 = a3;
  v6 = 0;
  v8 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    while ( 1 )
    {
      result = a2[6] & 0xFFFFFFFFFFFFF000uLL;
      if ( !result )
        break;
      a2 = (_QWORD *)a2[1];
      if ( ++v6 >= a3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v6 == a3 )
    {
      *(_QWORD *)a4 = 0LL;
      return result;
    }
  }
  v9 = v8;
  v10 = *((unsigned int *)KeGetCurrentPrcb() + 9);
  v11 = (unsigned int)v10;
  v12 = *(struct _MDL **)(qword_140C5A860 + 8 * v10);
  v13 = 0;
  v14 = v12 + 1;
  if ( (_DWORD)v5 )
  {
    v15 = v5;
    do
    {
      if ( (v9[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        ++v13;
        v14->Next = (struct _MDL *)(*v9 >> 12);
        v14 = (struct _MDL *)((char *)v14 + 8);
      }
      v9 = (_QWORD *)v9[1];
      --v15;
    }
    while ( v15 );
  }
  v16 = 0LL;
  v12->StartVa = 0LL;
  v17 = 1;
  v12->ByteOffset = 0;
  v18 = byte_140C5A858 == 0;
  v12->ByteCount = v13 << 12;
  if ( !v18 )
  {
    v16 = *(PSLIST_ENTRY *)(qword_140C5A868 + 8 * v11);
    goto LABEL_32;
  }
  v19 = ExpInterlockedPopEntrySList(&stru_140D01AD0);
  if ( v19 )
  {
    *((_DWORD *)&v19[1].Next + 3) = 0;
    v16 = v19;
LABEL_31:
    _InterlockedIncrement((volatile signed __int32 *)&v16[1].Next + 2);
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = v16 + 2;
    sub_1403119F0(a4 + 24, (volatile __int64 *)&v16[2]);
LABEL_32:
    result = (unsigned __int64)MmMapLockedPagesWithReservedMapping(v16[1].Next, 0x446C6148u, v12, MmCached);
    v20 = result;
    if ( !result )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF02uLL, 0LL, 0LL);
    goto LABEL_16;
  }
  result = (unsigned __int64)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
  v20 = result;
  if ( !result )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)&qword_140CFCED0;
    sub_1403119F0((__int64)&LockHandle, &qword_140CFCED0);
    v23 = 1;
    v24 = *(_DWORD *)(*(_QWORD *)qword_140C5A868 + 24LL);
    if ( (unsigned int)dword_140D01AE8 > 1 )
    {
      v25 = (__int64 *)(qword_140C5A868 + 8);
      do
      {
        v26 = *v25;
        v27 = v24;
        ++v25;
        v24 = *(_DWORD *)(v26 + 24);
        v28 = v23;
        if ( v24 >= v27 )
          v28 = (unsigned int)v16;
        ++v23;
        LODWORD(v16) = v28;
        if ( v24 >= v27 )
          v24 = v27;
      }
      while ( v23 < dword_140D01AE8 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = *(PSLIST_ENTRY *)(qword_140C5A868 + 8LL * (unsigned int)v16);
    goto LABEL_31;
  }
  v17 = 0;
LABEL_16:
  v21 = v20;
  if ( (_DWORD)v5 )
  {
    v22 = v5;
    do
    {
      result = v8[6];
      if ( (result & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        result = v21 | v8[6] & 0xFEFLL | 0x10;
        v8[6] = result;
        v21 += 4096LL;
      }
      v8 = (_QWORD *)v8[1];
      --v22;
    }
    while ( v22 );
  }
  *(_QWORD *)a4 = v12;
  *(_QWORD *)(a4 + 8) = v20;
  *(_QWORD *)(a4 + 16) = v16;
  *(_BYTE *)(a4 + 48) = v17;
  return result;
}
