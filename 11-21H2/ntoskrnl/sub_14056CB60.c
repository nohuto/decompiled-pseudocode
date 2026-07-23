/*
 * XREFs of sub_14056CB60 @ 0x14056CB60
 * Callers:
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 *     sub_140A692FC @ 0x140A692FC (sub_140A692FC.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_14056CB60()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax

  EffectiveIrql = KeGetEffectiveIrql();
  v2 = 13LL;
  if ( EffectiveIrql >= 0xDu )
    return sub_14038BFAC(13LL, v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = (unsigned int)CurrentIrql + 1;
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v1 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    *(_DWORD *)(v4 + 20) |= v1;
  }
  sub_14038BFAC(v2, v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
