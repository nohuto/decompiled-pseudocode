/*
 * XREFs of sub_1408080D4 @ 0x1408080D4
 * Callers:
 *     sub_1403987D0 @ 0x1403987D0 (sub_1403987D0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     <none>
 */

char sub_1408080D4()
{
  char result; // al

  if ( dword_140C227E0 != 4 )
    return 0;
  if ( byte_140C232DC )
    return 0;
  result = 1;
  if ( byte_140C22899 != 1 || byte_140C22890 != 1 || byte_140C2289E != 2 )
    return 0;
  return result;
}
