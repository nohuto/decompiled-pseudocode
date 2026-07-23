/*
 * XREFs of sub_1405D4A94 @ 0x1405D4A94
 * Callers:
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_14045E5B0 @ 0x14045E5B0 (sub_14045E5B0.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405D4A94(char a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  if ( TolerableDelay )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140C20B24);
    if ( a1 )
      byte_140C20B20 = 0;
    if ( !byte_140C20B20 && dword_140C20AA0 > 0 )
    {
      byte_140C20B20 = 1;
      KeSetCoalescableTimer(
        &stru_140C20A60,
        (LARGE_INTEGER)(-10000LL * TolerableDelay),
        0,
        TolerableDelay,
        &stru_140C20AE0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C20B24);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
