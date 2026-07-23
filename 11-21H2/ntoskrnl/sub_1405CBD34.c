/*
 * XREFs of sub_1405CBD34 @ 0x1405CBD34
 * Callers:
 *     sub_1405CBF94 @ 0x1405CBF94 (sub_1405CBF94.c)
 *     sub_1405CC460 @ 0x1405CC460 (sub_1405CC460.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_1403580A8 @ 0x1403580A8 (sub_1403580A8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CC2CC @ 0x1405CC2CC (sub_1405CC2CC.c)
 *     sub_1405D25F0 @ 0x1405D25F0 (sub_1405D25F0.c)
 *     sub_1405D6DC4 @ 0x1405D6DC4 (sub_1405D6DC4.c)
 */

LONG __fastcall sub_1405CBD34(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int64 v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r15
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  LONG result; // eax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_23;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1160));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1160);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1160), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_23;
  sub_1403580A8((__int64 *)(BugCheckParameter3 + 976));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  sub_140355058(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v9 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v9, v9);
  }
  while ( v10 != v9 );
  if ( ((v9 & 0x1000) != 0) != a2 )
LABEL_23:
    sub_1405CAE6C(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v11 = *(_QWORD *)(BugCheckParameter3 + 1168);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1176);
  *(_QWORD *)(BugCheckParameter3 + 1168) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1176) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1180) &= ~2u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = -1LL << ((unsigned __int8)v8 + 1);
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)v13;
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  LOBYTE(v13) = a2;
  sub_1405D25F0(*(_QWORD *)(BugCheckParameter3 + 48), v13);
  if ( byte_140C24274 )
    v12 = 0;
  else
    sub_1405CC2CC(BugCheckParameter3);
  sub_1405D6DC4(BugCheckParameter3, v11, v12);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 244));
  if ( !result )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
