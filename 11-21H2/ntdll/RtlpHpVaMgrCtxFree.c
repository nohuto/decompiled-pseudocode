/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x180057B70
 * Callers:
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrFree @ 0x180055F70 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180056120 (RtlpHpVaMgrRangeSplit.c)
 *     RtlSparseArrayElementAllocated @ 0x180057CA8 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeFree @ 0x180057F40 (RtlpHpVaMgrRangeFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     RtlSparseArrayElementFindCapped @ 0x180120C2C (RtlSparseArrayElementFindCapped.c)
 */

signed __int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  signed __int64 result; // rax
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v11 = (unsigned __int64)v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = ZwFreeVirtualMemory(-1LL, a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  LOBYTE(v8) = *v7;
  v12 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v8 & 0xFE;
    return RtlpHpVaMgrRangeFree(v12, v11);
  }
  if ( (*(_BYTE *)(v12 + 46) & 0xEu) < 4 )
  {
    ZwFreeVirtualMemory(-1LL, a2, a3, 0x4000LL);
    LOBYTE(v8) = *(_BYTE *)v11;
  }
  if ( (v8 & 2) != 0 )
  {
    v15 = v11;
    do
      v11 -= 32LL;
    while ( (*(_BYTE *)v11 & 2) != 0 );
  }
  else
  {
    LOBYTE(v8) = v8 & 4;
    if ( ((*(_BYTE *)(v12 + 46) >> 5) & ((_BYTE)v8 == 0)) == 0 )
    {
      v13 = (_BYTE)v8 ? *(_QWORD *)(v11 + 24) : *(unsigned __int16 *)(v11 + 24);
      if ( v6 != v13 )
        __int2c();
    }
    if ( (_BYTE)v8 )
      v14 = *(_QWORD *)(v11 + 24);
    else
      v14 = *(unsigned __int16 *)(v11 + 24);
    if ( v6 < v14 )
      v15 = v11 + 32 * v6;
    else
      v15 = 0LL;
  }
  RtlAcquireSRWLockExclusive(v12, v8, v9, v10);
  if ( v15 )
    RtlpHpVaMgrRangeSplit(v12, v11, (__int64)(v15 - v11) >> 5);
  v11 = RtlpHpVaMgrFree(v12);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
  if ( v11 )
    return RtlpHpVaMgrRangeFree(v12, v11);
  return result;
}
