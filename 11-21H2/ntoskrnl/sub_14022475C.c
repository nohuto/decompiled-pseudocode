/*
 * XREFs of sub_14022475C @ 0x14022475C
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     sub_140224690 @ 0x140224690 (sub_140224690.c)
 *     sub_140389D50 @ 0x140389D50 (sub_140389D50.c)
 *     sub_1403CF1A0 @ 0x1403CF1A0 (sub_1403CF1A0.c)
 *     sub_1403DEC60 @ 0x1403DEC60 (sub_1403DEC60.c)
 *     sub_14045E84A @ 0x14045E84A (sub_14045E84A.c)
 *     sub_1405DD354 @ 0x1405DD354 (sub_1405DD354.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_140808958 @ 0x140808958 (sub_140808958.c)
 *     sub_14099786C @ 0x14099786C (sub_14099786C.c)
 * Callees:
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14022475C(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rdx
  struct _KPRCB *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  qword_140C22FE0 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((_QWORD *)CurrentPrcb + 1);
  _disable();
  sub_140345C80(CurrentPrcb, v4, 0LL, 0LL);
  _enable();
  sub_140224A24(a1);
  v5 = KeGetCurrentPrcb();
  v6 = *((_QWORD *)v5 + 1);
  _disable();
  sub_140345B70(v5, v6, 0LL);
  _enable();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = *((_QWORD *)v9 + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(v9);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeLeaveCriticalRegion();
}
