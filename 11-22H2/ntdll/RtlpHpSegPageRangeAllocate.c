/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x180035030
 * Callers:
 *     RtlpHpSegAlloc @ 0x180034EA8 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180034BE4 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeSplit @ 0x180035260 (RtlpHpSegPageRangeSplit.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004AB08 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800670EC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x180067138 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpTlLogMemStats @ 0x1801187FC (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18012227C (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // esi
  int v7; // r12d
  _RTL_RB_TREE *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // esi
  unsigned __int16 v13; // ax
  signed __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // edx
  _BYTE *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbp

  v5 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v6 = v5 << 24;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v8 = (_RTL_RB_TREE *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 96);
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v8;
  v10 = 0LL;
  while ( v9 )
  {
    if ( v6 < *(_DWORD *)(v9 + 28) )
    {
      v11 = *(_QWORD *)v9;
      v10 = v9;
    }
    else
    {
      if ( v6 <= *(_DWORD *)(v9 + 28) )
        goto LABEL_15;
      v11 = *(_QWORD *)(v9 + 8);
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  v9 = v10;
LABEL_15:
  v12 = a3 & 0x800000;
  if ( !v9 )
    goto LABEL_31;
  if ( v12 )
  {
    v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v5, 1LL);
  }
  else
  {
    RtlRbRemoveNode(v8, (PRTL_BALANCED_NODE)v9);
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    v13 = ~(unsigned __int16)*(_DWORD *)(v9 + 28);
    *(_DWORD *)v9 = -857879331;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v13);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  }
  if ( !v9 )
  {
LABEL_31:
    if ( !v7 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v20 = 0LL;
    if ( v12 || (*(_BYTE *)(a1 + 13) & 7) == 3 && (BYTE1(*(_QWORD *)(a1 + 40)) == 3 || BYTE1(*(_QWORD *)(a1 + 40)) == 2) )
      v20 = 2LL;
    v21 = RtlpHpSegSegmentAllocate(a1, 0LL, v20);
    v22 = v21;
    if ( !v21 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v21, 0LL);
    v9 = v22 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v7 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegHeapAddSegment(a1, v22);
    if ( v12 )
      v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v5, 0LL);
  }
  v15 = RtlpHpSegPageRangeSplit(v14, v9, v5);
  if ( v15 )
    RtlpHpSegFreeRangeInsert(a1, v15, 0);
  v16 = v5 - 1;
  *(_BYTE *)(v9 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * (v5 - 1) + v9 + 24) |= 1u;
  if ( !v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v17 = 1;
  if ( v16 > 1 )
  {
    v19 = (_BYTE *)(v9 + 56);
    do
    {
      v19[7] = v17++;
      *v19 |= 1u;
      v19 += 32;
    }
    while ( v17 < v16 );
  }
  return v9;
}
