/*
 * XREFs of sub_1405DF244 @ 0x1405DF244
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool sub_1405DF244()
{
  bool v0; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v2; // r9
  _BYTE *v3; // rcx
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v3 = (_BYTE *)*((_QWORD *)KeGetCurrentPrcb() + 4200);
  if ( v3 && *v3 == 1 )
    v0 = qword_140D068A8 != 0;
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
  return v0;
}
