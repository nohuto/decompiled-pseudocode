/*
 * XREFs of sub_18001C0F4 @ 0x18001C0F4
 * Callers:
 *     sub_18001C120 @ 0x18001C120 (sub_18001C120.c)
 * Callees:
 *     <none>
 */

char sub_18001C0F4()
{
  char v0; // dl
  unsigned int i; // ecx

  v0 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( dword_1801069E0[i] == -2147024882 )
      return 1;
  }
  return v0;
}
