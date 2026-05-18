/*
 * XREFs of sub_18001D5E8 @ 0x18001D5E8
 * Callers:
 *     sub_18001D614 @ 0x18001D614 (sub_18001D614.c)
 * Callees:
 *     <none>
 */

char sub_18001D5E8()
{
  char result; // al
  _DWORD *v1; // rcx
  unsigned int v2; // edx

  result = 0;
  v1 = &unk_180128980;
  v2 = 0;
  while ( *v1 != -2147024882 )
  {
    ++v2;
    ++v1;
    if ( v2 >= 9 )
      return result;
  }
  return 1;
}
