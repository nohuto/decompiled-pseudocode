/*
 * XREFs of sub_180033710 @ 0x180033710
 * Callers:
 *     sub_180100AF8 @ 0x180100AF8 (sub_180100AF8.c)
 *     sub_180100E10 @ 0x180100E10 (sub_180100E10.c)
 *     sub_18010354C @ 0x18010354C (sub_18010354C.c)
 *     sub_180103608 @ 0x180103608 (sub_180103608.c)
 * Callees:
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 */

void __fastcall sub_180033710(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    sub_180029930(a1, a2);
    JUMPOUT(0x180033725LL);
  }
}
