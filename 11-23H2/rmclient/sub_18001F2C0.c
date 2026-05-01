/*
 * XREFs of sub_18001F2C0 @ 0x18001F2C0
 * Callers:
 *     sub_18001F224 @ 0x18001F224 (sub_18001F224.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18001F2C0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( a1 >= a2 )
  {
    if ( a1 <= a2 || a3 >= a4 )
      return 1LL;
    return a1 <= a4;
  }
  else
  {
    if ( a3 >= a4 )
    {
      if ( a3 <= a4 || a3 <= a2 )
        return 1LL;
    }
    else if ( a1 <= a4 && a2 >= a3 )
    {
      return 1LL;
    }
    return 0LL;
  }
}
