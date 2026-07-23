/*
 * XREFs of sub_14057AEEC @ 0x14057AEEC
 * Callers:
 *     sub_14065416C @ 0x14065416C (sub_14065416C.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057B0EC @ 0x14057B0EC (sub_14057B0EC.c)
 *     sub_14057B194 @ 0x14057B194 (sub_14057B194.c)
 */

__int64 __fastcall sub_14057AEEC(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax

  ++dword_140C2A8BC;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_14057B0EC();
  sub_14057B194(a1);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
