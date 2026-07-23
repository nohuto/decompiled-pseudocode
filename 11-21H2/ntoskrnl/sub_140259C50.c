/*
 * XREFs of sub_140259C50 @ 0x140259C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14050EC90 @ 0x14050EC90 (sub_14050EC90.c)
 *     sub_14051F5B0 @ 0x14051F5B0 (sub_14051F5B0.c)
 */

char __fastcall sub_140259C50(int a1)
{
  char result; // al

  if ( a1 )
  {
    if ( a1 == 1 )
      return sub_14050EC90();
  }
  else
  {
    result = byte_140C4A468;
    if ( byte_140C4A468 )
      sub_14051F5B0(0LL, 0LL);
  }
  return result;
}
