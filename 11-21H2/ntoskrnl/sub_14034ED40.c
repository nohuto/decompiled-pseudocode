/*
 * XREFs of sub_14034ED40 @ 0x14034ED40
 * Callers:
 *     sub_1402406C8 @ 0x1402406C8 (sub_1402406C8.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E290 @ 0x14036E290 (sub_14036E290.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14034ED40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned __int64 v8; // r8

  v4 = WORD1(qword_140C5A5C0) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  if ( ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - a3 >= 16 * (unsigned __int64)v4 )
    return 0LL;
  v5 = ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
  v6 = (__int64)(v5 - a3) >> 4;
  v7 = v4 - v6;
  *(_WORD *)(a3 + 2) = WORD1(qword_140C5A5C0) ^ v6 ^ WORD1(a3);
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_WORD *)(v5 + 2) = v7;
  *(_WORD *)(v5 + 4) = v6;
  *(_QWORD *)v5 ^= v5 ^ qword_140C5A5C0;
  v8 = v5 + 16LL * v7;
  if ( v8 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v8 + 4) = WORD2(v8) ^ v7 ^ WORD2(qword_140C5A5C0);
  return v5;
}
