/*
 * XREFs of sub_1405A95FC @ 0x1405A95FC
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_140979A34 @ 0x140979A34 (sub_140979A34.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A95FC(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  char v8; // cl
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // dl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf

  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = (unsigned __int8)sub_1402F2700(v6);
  v8 = *(_BYTE *)(v6 + 34) & 0xFE;
  *(_QWORD *)v6 ^= (*(_QWORD *)v6 ^ (v5 >> 3)) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(v6 + 34) = v8 | 6;
  v9 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 24) = v9 | 1;
  *(_BYTE *)(v6 + 34) |= 0x10u;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = sub_1402CCC50(32LL * (a3 & 0x1F));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( ((unsigned __int8)dword_140D06B08 & v10) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (v10 + (unsigned __int8)v7));
        v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
