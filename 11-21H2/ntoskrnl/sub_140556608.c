/*
 * XREFs of sub_140556608 @ 0x140556608
 * Callers:
 *     sub_1402A41A4 @ 0x1402A41A4 (sub_1402A41A4.c)
 *     sub_140417B94 @ 0x140417B94 (sub_140417B94.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_140556608(__int64 a1, __int64 a2)
{
  bool v2; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !*(_DWORD *)(a1 + 4) )
    v2 = *(_BYTE *)(a2 + 68) == 1;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
