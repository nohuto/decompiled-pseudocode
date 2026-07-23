/*
 * XREFs of sub_1403C1B74 @ 0x1403C1B74
 * Callers:
 *     sub_140A59518 @ 0x140A59518 (sub_140A59518.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403C1B74(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 CurrentIrql; // bl
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 0x3FFC;
  }
  *(_DWORD *)(a1 + 33116) = 0;
  *(_DWORD *)(a1 + 32428) = 0;
  v6 = a2[4];
  *a4 = 0LL;
  *(_DWORD *)(a1 + 33120) = v6;
  *(_DWORD *)(a1 + 32424) = a2[5];
  *(_DWORD *)(a1 + 13260) = a2[6];
  *(_DWORD *)(a1 + 13272) = a2[7];
  *(_DWORD *)(a1 + 33344) = a2[8];
  *(_DWORD *)(a1 + 32436) = a2[9];
  v7 = *(_QWORD *)(a1 + 34984);
  if ( a3 != v7 )
  {
    *a4 = v7;
    v7 = a3;
    *(_QWORD *)(a1 + 34984) = a3;
  }
  *(_QWORD *)(a1 + 34992) = v7;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
