/*
 * XREFs of sub_14051CD50 @ 0x14051CD50
 * Callers:
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     sub_14051C710 @ 0x14051C710 (sub_14051C710.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14051CD50(int a1, const signed __int64 *a2)
{
  if ( a1 == 1 )
  {
    if ( !_bittest64(a2, 0x37u) )
      return 0;
  }
  else if ( a1 != 2 || (*a2 & 0x2000100000000000LL) != 0x2000000000000000LL )
  {
    return 0;
  }
  return 1;
}
