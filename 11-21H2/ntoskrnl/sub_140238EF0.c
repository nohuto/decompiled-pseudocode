/*
 * XREFs of sub_140238EF0 @ 0x140238EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140238EF0(unsigned __int8 *a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx

  v5 = *a1;
  LODWORD(v5) = v5 | 0x20000;
  if ( a2 != 2 )
    v5 = *a1;
  sub_14042A5E0(800LL, v5);
  sub_14042A5E0(992LL, *((unsigned int *)a1 + 1));
  sub_14042A5E0(896LL, a3);
  return 0LL;
}
