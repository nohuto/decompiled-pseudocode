/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x18002E5E4
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeap @ 0x180055A4C (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18011FA24 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x18002F3E4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18002F560 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        char *BaseAddress,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v9; // r14d
  char *v10; // r15
  __int64 v11; // rdx
  unsigned __int8 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax

  v9 = 3;
  if ( a3 > (unsigned int)*((unsigned __int16 *)BaseAddress + 478) - 16 )
    goto LABEL_11;
  v10 = BaseAddress + 896;
  v11 = (unsigned int)(a3 + 2);
  if ( (_DWORD)a2 == (_DWORD)a3 )
    v11 = (unsigned int)a3;
  v12 = 0;
  v13 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( (*(_QWORD *)&v10[8 * v13 + 128] & 1) != 0 && !(unsigned int)RtlpHpLfhBucketUpdateStats(v10, v11, 1LL) )
    goto LABEL_11;
  v14 = *(_QWORD *)&v10[8 * v13 + 128];
  v15 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
  if ( *(_BYTE *)(v14 + 2) != 1 )
    v12 = *(_BYTE *)(v15 + BYTE1(NtCurrentTeb()->HeapData) + v14);
  v16 = RtlpHpLfhSlotAllocate(
          (unsigned __int64)v10,
          *(_RTL_SRWLOCK **)&v10[8 * v13 + 128],
          *(_QWORD *)((unsigned __int8)v10[56] - (unsigned __int64)((v10[56] - 1) & 7) + v15 + 7 + 8LL * v12 + v14),
          a2,
          a4);
  if ( v16 == -1 )
  {
LABEL_11:
    if ( a3 > 0x20000 )
    {
      if ( a3 > *((unsigned int *)BaseAddress + 132) )
        v18 = RtlpHpLargeAlloc(BaseAddress);
      else
        v18 = RtlpHpSegAlloc(
                (__int64)&BaseAddress[*((unsigned int *)BaseAddress + 84) < a3 ? 512LL : 320LL],
                a2,
                a3,
                a3,
                a4);
    }
    else
    {
      v18 = RtlpHpVsContextAllocate(BaseAddress + 704, (unsigned int)a2, (unsigned int)a3, a4);
    }
    v16 = v18;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v16;
}
