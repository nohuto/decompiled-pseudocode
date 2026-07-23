/*
 * XREFs of sub_14056DF08 @ 0x14056DF08
 * Callers:
 *     sub_14063DA44 @ 0x14063DA44 (sub_14063DA44.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     sub_1409FB600 @ 0x1409FB600 (sub_1409FB600.c)
 *     sub_140A6CA38 @ 0x140A6CA38 (sub_140A6CA38.c)
 * Callees:
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14056DF08(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  sub_1402F3290((volatile signed __int32 *)a1, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v5 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
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
  return v5;
}
