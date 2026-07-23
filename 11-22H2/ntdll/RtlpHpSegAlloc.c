/*
 * XREFs of RtlpHpSegAlloc @ 0x180034EA8
 * Callers:
 *     RtlpHpSegSubAllocate @ 0x180034E14 (RtlpHpSegSubAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x180066E30 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1800345B8 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180035030 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180046E10 (RtlpHpSegPageRangeCommit.c)
 *     RtlHeapZero @ 0x18008EF20 (RtlHeapZero.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1801228F0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  int v8; // r12d
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r14d
  int v15; // ecx
  __int64 v16; // rbx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+80h] [rbp+28h]

  v6 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = a5 & 4;
  v11 = v7 + 1;
  if ( (a5 & 4) == 0 )
    v11 = v7;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v12 = RtlpHpSegPageRangeAllocate(a1, v11, a5);
  v20 = v12;
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = *(unsigned __int8 *)(v12 + 31);
  v15 = (unsigned __int16)~*(_WORD *)(v12 + 28);
  v21 = v15;
  if ( !(_DWORD)v6 )
    goto LABEL_6;
  v18 = a5 & 0xFFFFFFFD;
  if ( !v15 )
    v18 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v18, 0LL) < 0 )
  {
    v16 = 0LL;
    RtlpHpSegPageRangeShrink(a1, v20, 0, a5);
  }
  else
  {
LABEL_6:
    if ( v8 )
      RtlpHpSegPageRangeCommit(a1, 0, 0LL);
    *(_DWORD *)(v13 + 4) = (v14 << *(_BYTE *)(a1 + 8)) - a2;
    v16 = (v13 & *(_QWORD *)a1) + ((v13 - (v13 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0 )
    {
      if ( v21
        || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
        || (*(_BYTE *)(a1 + 13) & 7) != 0
        && (v19 = RtlpHpSegPageRangeComputeLargePageCost(a1, v16, (unsigned int)a2), v19 <= 2) )
      {
        RtlHeapZero(v16, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v16;
}
