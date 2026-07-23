/*
 * XREFs of sub_140215D78 @ 0x140215D78
 * Callers:
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 * Callees:
 *     sub_1402166A4 @ 0x1402166A4 (sub_1402166A4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140215D78(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rax
  unsigned __int8 v7; // r9
  __int64 v8; // r10
  unsigned __int64 *v9; // r11
  __int64 v10; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf

  v3 = 1LL;
  if ( !a2 )
    v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = sub_1402166A4(a1, v3);
  v10 = v6;
  if ( v6 )
  {
    if ( v9 )
    {
      while ( --v8 )
      {
        v13 = *v9;
        if ( (*v9 > qword_140C50840 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0)
          && (v13 < *(_QWORD *)(v6 + 24) || v13 > *(_QWORD *)(v6 + 32)) )
        {
          v10 = 0LL;
          break;
        }
        ++v9;
      }
    }
    else if ( v3 > *(_QWORD *)(v6 + 32) - a1 + 1 )
    {
      v10 = 0LL;
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
