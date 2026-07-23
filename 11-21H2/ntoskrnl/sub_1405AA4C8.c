/*
 * XREFs of sub_1405AA4C8 @ 0x1405AA4C8
 * Callers:
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_14097D2A0 @ 0x14097D2A0 (sub_14097D2A0.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405AA4C8(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf

  v7 = sub_1402F2700(a2);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v7;
  v10 = (v8 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v11 = v8 ^ (v10 ^ v8) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v11;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)(a2 + 24) = v11 | 0x4000000000000000LL;
  }
  else if ( (v8 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v12 = *(_BYTE *)(a2 + 34);
    if ( (v12 & 8) != 0 )
    {
      v10 = 1LL;
    }
    else
    {
      *(_BYTE *)(a2 + 34) = v12 | 8;
      *(_QWORD *)(a2 + 16) = *a3;
      *a3 = a2;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v10;
}
