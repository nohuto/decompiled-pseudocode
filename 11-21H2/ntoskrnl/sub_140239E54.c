/*
 * XREFs of sub_140239E54 @ 0x140239E54
 * Callers:
 *     sub_140239D20 @ 0x140239D20 (sub_140239D20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140239E54(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r11
  __int16 v5; // cx
  __int16 v6; // cx
  __int64 result; // rax

  v4 = (unsigned __int64)(a2 - 48) >> 4;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 32) = v4;
  v5 = 0;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)a3 >> 12));
  if ( a3 == (_DWORD)a2 )
    v5 = 0x8000;
  v6 = *(_WORD *)(a1 + 34) & 0x7FFF | v5;
  *(_WORD *)(a1 + 34) = v6;
  *(_WORD *)(a1 + 34) = v6 ^ (v4 ^ v6 ^ 0x2BED) & 0x7FFF;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 50) = (unsigned __int16)v4;
  result = (a1 + 48) ^ qword_140C5A5C0 ^ *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
