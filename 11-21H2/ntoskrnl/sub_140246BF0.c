/*
 * XREFs of sub_140246BF0 @ 0x140246BF0
 * Callers:
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140246BF0(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  char v6; // cl
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v3 = 48 * a2 - 0x220000000000LL;
  v4 = ((unsigned __int64)sub_140317A10((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v5 = sub_1402F2700(v3);
  v6 = *(_BYTE *)(v3 + 34) & 0xFE;
  *(_QWORD *)(v3 + 8) = a1;
  v7 = v5;
  *(_BYTE *)(v3 + 34) = v6 | 6;
  *(_QWORD *)v3 = 0LL;
  sub_14033C3E0(v3, v4);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
