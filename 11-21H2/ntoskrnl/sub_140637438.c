/*
 * XREFs of sub_140637438 @ 0x140637438
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1409F4F8C @ 0x1409F4F8C (sub_1409F4F8C.c)
 * Callees:
 *     sub_140300B00 @ 0x140300B00 (sub_140300B00.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_140637438(__int16 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v4; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // al
  _BYTE *v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdx
  char v17; // al
  _BYTE *v18; // rdx

  v4 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = -1LL;
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v8 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v8 )
    {
      v9 = sub_140300B00(a1, v8);
      v4 = *v10 == (unsigned __int8)v9;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(v6 << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v16 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v16 )
    {
      v17 = sub_140300B00(a1, v16);
      return *v18 == (unsigned __int8)v17;
    }
  }
  return v4;
}
