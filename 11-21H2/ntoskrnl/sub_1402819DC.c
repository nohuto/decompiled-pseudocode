/*
 * XREFs of sub_1402819DC @ 0x1402819DC
 * Callers:
 *     sub_1402819BC @ 0x1402819BC (sub_1402819BC.c)
 *     sub_14029EBB0 @ 0x14029EBB0 (sub_14029EBB0.c)
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_1402819DC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8

  v3 = *(__int64 ***)(a1 + 2008);
  v4 = a2 >> 12;
  v5 = a3 >> 12;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v3 )
        return 0LL;
      if ( v5 >= (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32)) )
        break;
      v3 = (__int64 **)*v3;
    }
    if ( v4 <= (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) )
      break;
    v3 = (__int64 **)v3[1];
  }
  return v3;
}
