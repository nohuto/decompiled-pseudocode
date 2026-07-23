/*
 * XREFs of sub_140565198 @ 0x140565198
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1405D9310 @ 0x1405D9310 (sub_1405D9310.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140565198(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  __int64 *v5; // rdi
  int v6; // esi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( !qword_140C404F0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140D00AD8);
  v5 = (__int64 *)qword_140C404F0;
  v6 = 0;
  while ( v5 != &qword_140C404F0 )
  {
    v6 = sub_14042A5E0(a1, v5[3]);
    if ( v6 < 0 )
      break;
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D00AD8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return (unsigned int)v6;
}
