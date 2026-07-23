/*
 * XREFs of sub_14046148C @ 0x14046148C
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041AAD4 @ 0x14041AAD4 (sub_14041AAD4.c)
 */

char __fastcall sub_14046148C(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  char v8; // di
  __int64 v9; // r11
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  if ( !a5 )
    return sub_14041AAD4(a1, a2, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = sub_14041AAD4(a1, a2, a3, a4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
