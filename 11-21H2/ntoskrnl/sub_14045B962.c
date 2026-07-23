/*
 * XREFs of sub_14045B962 @ 0x14045B962
 * Callers:
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_140589C40 @ 0x140589C40 (sub_140589C40.c)
 * Callees:
 *     sub_1403C9B18 @ 0x1403C9B18 (sub_1403C9B18.c)
 *     sub_140589CEC @ 0x140589CEC (sub_140589CEC.c)
 */

__int64 __fastcall sub_14045B962(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax

  v5 = a2[5];
  if ( (v5 & 0x10000000000LL) != 0 )
  {
    sub_1403C9B18(a1, (__int64)a2, a3, 1);
    v5 = a2[5];
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF68000000000uLL;
  a2[2] = a4;
  a2[5] = v5 & 0x7FFFFF0000000000LL | 0x3FFFFFFFFELL;
  *a2 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  return sub_140589CEC(a2, a5);
}
