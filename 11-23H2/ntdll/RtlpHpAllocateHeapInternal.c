/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x180066E14
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180066CD8 (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18008E8AC (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x180034D48 (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x180066ED8 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhContextAllocate @ 0x180066F3C (RtlpHpLfhContextAllocate.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        char *BaseAddress,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*((unsigned __int16 *)BaseAddress + 478) - 16
    || (v10 = RtlpHpLfhContextAllocate(BaseAddress + 896), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 <= *((unsigned int *)BaseAddress + 132) )
        v11 = RtlpHpSegAlloc(
                (__int64)&BaseAddress[*((unsigned int *)BaseAddress + 84) < v6 ? 512LL : 320LL],
                v7,
                v6,
                v6,
                a4);
      else
        v11 = (__int64)RtlpHpLargeAlloc(BaseAddress, v7, v6, a4);
    }
    else
    {
      v11 = RtlpHpVsContextAllocate(BaseAddress + 704, a2, a3, a4);
    }
    v10 = v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
