/*
 * XREFs of sub_180098544 @ 0x180098544
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 *     sub_18009BBB8 @ 0x18009BBB8 (sub_18009BBB8.c)
 * Callees:
 *     sub_18009839C @ 0x18009839C (sub_18009839C.c)
 */

__int64 *__fastcall sub_180098544(__int64 a1, __int64 *a2, size_t *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi

  v5 = qword_1801D8A58;
  v7 = *(_QWORD *)(qword_1801D8A68 + 16 * (a4 & qword_1801D8A80) + 8);
  if ( v7 == qword_1801D8A58 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(_QWORD *)(qword_1801D8A68 + 16 * (a4 & qword_1801D8A80));
    while ( sub_18009839C(v5, a3, (const void **)(v7 + 16)) )
    {
      if ( v7 == v8 )
      {
        a2[1] = 0LL;
        *a2 = v7;
        return a2;
      }
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = *(_QWORD *)v7;
    a2[1] = v7;
  }
  return a2;
}
