/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x180064890
 * Callers:
 *     RtlpHpFreeVA @ 0x1800478C4 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlSparseArrayElementAllocated @ 0x1800649E4 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrFree @ 0x180064BC8 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x180064D78 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180083D98 (RtlpHpVaMgrRangeSplit.c)
 *     RtlSparseArrayElementFindCapped @ 0x180122AE4 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  _BYTE *v11; // rbp
  ULONG_PTR *v12; // rax
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rcx
  _BYTE *v15; // rdi
  __int64 Capped; // rbx
  __int64 v17; // rax

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    v17 = 6 * (*(unsigned __int8 *)(Capped + 1) + 45LL);
    RtlpHpEnvFreeVA(a2, a3, 0x8000, (*(unsigned __int8 *)(a1 + 8 * v17 + 46) >> 1) & 7, *(_QWORD *)(a1 + 8 * v17 + 32));
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return;
  }
  v9 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
LABEL_20:
    RtlpHpVaMgrRangeFree(v9, v8);
    return;
  }
  v10 = *(_BYTE *)(v9 + 46) & 0xE;
  if ( v10 < 4u || v10 >= 0xAu )
    RtlpHpEnvFreeVA(a2, a3, 0x4000, (*(unsigned __int8 *)(v9 + 46) >> 1) & 7, *(_QWORD *)(v9 + 32));
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
    v12 = (ULONG_PTR *)(v8 + 24);
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
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v15 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v15 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v11);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v8 )
    goto LABEL_20;
}
