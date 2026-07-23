/*
 * XREFs of RtlpHpSegAlloc @ 0x14024DC10
 * Callers:
 *     RtlpHpAllocateHeap @ 0x14024D4F0 (RtlpHpAllocateHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     RtlpHpMetadataAlloc @ 0x1403247B8 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x14034FDAC (RtlpHpSegSubAllocate.c)
 *     ExAllocateHeapPages @ 0x1403B9D9C (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x1403BA2F4 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x14060F280 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegPageRangeAllocate @ 0x14024DDC0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14024E3C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14024FF60 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlHeapZero @ 0x1403D8A70 (RtlHeapZero.c)
 *     RtlpHpSegPageRangeFree @ 0x1405B6FF0 (RtlpHpSegPageRangeFree.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned int v8; // r13d
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // ebp
  int v13; // r12d
  unsigned int v14; // eax
  __int64 v15; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  result = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v11 = result;
  if ( result )
  {
    v12 = *(unsigned __int8 *)(result + 31);
    v13 = (unsigned __int16)~*(_WORD *)(result + 28);
    if ( !(_DWORD)v5 )
      goto LABEL_9;
    v14 = a5 & 0xFFFFFFFD;
    if ( !v13 )
      v14 = a5;
    if ( (int)RtlpHpSegPageRangeCommit(a1, v11, 0, v5, v14, 0LL) < 0 )
    {
      RtlpHpSegPageRangeFree(a1, v11, a5);
      return 0LL;
    }
    else
    {
LABEL_9:
      if ( (a5 & 4) != 0 )
        RtlpHpSegPageRangeCommit(a1, v11, v8 - 1, v8 - (v12 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
      *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
      v15 = (v11 & *(_QWORD *)a1) + ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
      if ( (a5 & 2) != 0
        && (v13
         || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
         || (*(_BYTE *)(a1 + 13) & 7) != 0
         && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v15, (unsigned int)a2) <= 2) )
      {
        RtlHeapZero(v15, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL, v10);
      }
      return v15;
    }
  }
  return result;
}
