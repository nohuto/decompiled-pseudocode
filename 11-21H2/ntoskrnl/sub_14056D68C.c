/*
 * XREFs of sub_14056D68C @ 0x14056D68C
 * Callers:
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 * Callees:
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 *     sub_14056D6C8 @ 0x14056D6C8 (sub_14056D6C8.c)
 */

__int64 sub_14056D68C()
{
  unsigned int v0; // eax

  if ( !_bittest64(&qword_140D068D8, 0x28u) )
    return 3221225659LL;
  v0 = sub_1404205F0(0xCu);
  return sub_14056D6C8(v0);
}
