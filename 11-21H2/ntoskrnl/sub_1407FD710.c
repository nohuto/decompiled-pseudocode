/*
 * XREFs of sub_1407FD710 @ 0x1407FD710
 * Callers:
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     sub_140246420 @ 0x140246420 (sub_140246420.c)
 */

__int64 __fastcall sub_1407FD710(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdi

  v3 = a1[1];
  if ( !v3 )
    return 1LL;
  v5 = a2 + a3;
  if ( (unsigned int)sub_140246420(9, v3 + (a2 >> 3), 8 * (((a2 + a3 + 7) >> 3) - (a2 >> 3))) )
  {
    if ( v5 > *a1 )
      *a1 = v5;
    return 1LL;
  }
  return 0LL;
}
