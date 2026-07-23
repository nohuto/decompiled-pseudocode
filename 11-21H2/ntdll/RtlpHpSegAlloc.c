/*
 * XREFs of RtlpHpSegAlloc @ 0x1800184F8
 * Callers:
 *     RtlpHpSegSubAllocate @ 0x180015038 (RtlpHpSegSubAllocate.c)
 *     RtlpHpSegLfhAllocate @ 0x180018450 (RtlpHpSegLfhAllocate.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18002E5E4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlHeapZero @ 0x180093F90 (RtlHeapZero.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18012086C (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r8
  bool v8; // zf
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r14d
  int v15; // r12d
  __int64 v16; // rbx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+80h] [rbp+28h]

  v6 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = (a5 & 4) == 0;
  v21 = a5 & 4;
  v11 = v7 + 1;
  if ( v8 )
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
    if ( v21 )
      RtlpHpSegPageRangeCommit(a1, 0, 0LL);
    *(_DWORD *)(v13 + 4) = (v14 << *(_BYTE *)(a1 + 8)) - a2;
    v16 = (v13 & *(_QWORD *)a1) + ((v13 - (v13 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0 )
    {
      if ( v15
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
