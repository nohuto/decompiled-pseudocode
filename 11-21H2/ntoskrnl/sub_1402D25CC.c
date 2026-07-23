/*
 * XREFs of sub_1402D25CC @ 0x1402D25CC
 * Callers:
 *     sub_140397278 @ 0x140397278 (sub_140397278.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CDDF8 @ 0x1405CDDF8 (sub_1405CDDF8.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     sub_1405D655C @ 0x1405D655C (sub_1405D655C.c)
 *     sub_1405D6DC4 @ 0x1405D6DC4 (sub_1405D6DC4.c)
 *     sub_1405DE3F0 @ 0x1405DE3F0 (sub_1405DE3F0.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 *     sub_140766834 @ 0x140766834 (sub_140766834.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403557F0 (PoFxIdleComponent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402D25CC(__int64 a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  int v4; // r8d
  unsigned __int64 v5; // rdi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rsi
  unsigned int i; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = (volatile LONG *)(v1 + 88);
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
      v4 = *(_DWORD *)(v1 + 120);
      v5 = v3;
      _m_prefetchw((const void *)(v1 + 296));
      v6 = *(_DWORD *)(v1 + 296);
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v6, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 824LL) & 1) == 0 )
      {
        *(_DWORD *)(v1 + 120) = v4 - 1;
        _m_prefetchw((const void *)(v1 + 296));
        v8 = *(_DWORD *)(v1 + 296);
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v8, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 4) != 0 )
        {
          v10 = *(_QWORD *)(v1 + 80);
          for ( i = 0; i < *(_DWORD *)(v10 + 828); ++i )
            PoFxIdleComponent(v10, i, 2LL);
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
    }
  }
}
