/*
 * XREFs of sub_140519D28 @ 0x140519D28
 * Callers:
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_140519D28(__int64 a1, int a2)
{
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r10
  _QWORD *i; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v4 = *(unsigned __int8 *)(a1 + 176);
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
  for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 20) == a2 )
    {
      v5 = i - 57;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 168));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
