/*
 * XREFs of sub_140334364 @ 0x140334364
 * Callers:
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_140334364(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r8
  KIRQL v5; // bl
  volatile LONG *v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    v5 = 17;
    v6 = (volatile LONG *)(v2 + 72);
  }
  else
  {
    v6 = (volatile LONG *)(v2 + 72);
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  }
  v7 = sub_1403342D0((__int64)a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return v7;
}
