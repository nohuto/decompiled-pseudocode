/*
 * XREFs of sub_14063A6C0 @ 0x14063A6C0
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

__int64 __fastcall sub_14063A6C0(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  v1 = (__int64)*(&qword_140C117A0 + a1);
  v2 = 80 * (qword_140C157C8 + 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  *(&qword_140C117A0 + a1) = 0LL;
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
  __writecr8(CurrentIrql);
  return sub_14096ED20(v1, v2);
}
