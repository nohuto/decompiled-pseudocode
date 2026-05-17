/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x180064760
 * Callers:
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x180047828 (RtlpHpEnvFreeVA.c)
 *     RtlSparseArrayElementAllocated @ 0x1800648B4 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrFree @ 0x180064A98 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x180064C48 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180084598 (RtlpHpVaMgrRangeSplit.c)
 *     RtlSparseArrayElementFindCapped @ 0x180123F94 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  _BYTE *v11; // rbp
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rdi
  __int64 result; // rax
  __int64 Capped; // rbx
  __int64 v18; // rax

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    v18 = 6 * (*(unsigned __int8 *)(Capped + 1) + 45LL);
    RtlpHpEnvFreeVA(
      (__int64)a2,
      (__int64)a3,
      0x8000,
      (*(unsigned __int8 *)(a1 + 8 * v18 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 8 * v18 + 32));
    result = *a3 >> 20;
    *(_QWORD *)(Capped + 24) -= result;
    return result;
  }
  v9 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
    return RtlpHpVaMgrRangeFree(v9, v8);
  }
  v10 = *(_BYTE *)(v9 + 46) & 0xE;
  if ( v10 < 4u || v10 >= 0xAu )
    RtlpHpEnvFreeVA((__int64)a2, (__int64)a3, 0x4000, (*(unsigned __int8 *)(v9 + 46) >> 1) & 7, *(_QWORD *)(v9 + 32));
  v11 = v8;
  if ( (*v8 & 2) != 0 )
  {
    v15 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
  }
  else
  {
    v12 = (unsigned __int64 *)(v8 + 24);
    if ( ((*(_BYTE *)(v9 + 46) >> 5) & (unsigned __int8)~(*v8 >> 2) & 1) == 0 )
    {
      v13 = (*v8 & 4) != 0 ? *v12 : *(unsigned __int16 *)v12;
      if ( v6 != v13 )
        __int2c();
    }
    if ( (*v8 & 4) != 0 )
      v14 = *v12;
    else
      v14 = *(unsigned __int16 *)v12;
    if ( v6 < v14 )
      v15 = &v8[32 * v6];
    else
      v15 = 0LL;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)v9);
  if ( v15 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v15 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v11);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v9);
  if ( v8 )
    return RtlpHpVaMgrRangeFree(v9, v8);
  return result;
}
