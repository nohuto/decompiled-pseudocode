/*
 * XREFs of sub_1407FF074 @ 0x1407FF074
 * Callers:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407FF074(int a1, int a2)
{
  if ( a1 == 7 )
  {
    a1 = 2;
  }
  else if ( a1 >= 2 )
  {
    ++a1;
  }
  if ( a2 == 7 )
  {
    a2 = 2;
  }
  else if ( a2 >= 2 )
  {
    ++a2;
  }
  return (unsigned int)(a1 - a2);
}
