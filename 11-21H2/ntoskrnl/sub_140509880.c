/*
 * XREFs of sub_140509880 @ 0x140509880
 * Callers:
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140509960 @ 0x140509960 (sub_140509960.c)
 */

__int64 __fastcall sub_140509880(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v4 = a2;
  LOBYTE(a2) = 1;
  sub_140509960(a1, a2, v4);
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
