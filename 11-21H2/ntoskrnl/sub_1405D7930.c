/*
 * XREFs of sub_1405D7930 @ 0x1405D7930
 * Callers:
 *     sub_1402D6094 @ 0x1402D6094 (sub_1402D6094.c)
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405D7930(unsigned int a1, char a2)
{
  KIRQL v2; // di
  bool i; // zf
  int v6; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98);
    KeAcquireSpinLockAtDpcLevel(&qword_140C22F88);
  }
  dword_140C2251C |= a1;
  for ( i = !_BitScanForward((unsigned int *)&v6, a1); !i; i = !_BitScanForward((unsigned int *)&v6, a1) )
  {
    a1 &= a1 - 1;
    if ( ((1 << v6) & dword_140C1FB94) != 0 )
      stru_140C22520[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
          i = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( i )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
