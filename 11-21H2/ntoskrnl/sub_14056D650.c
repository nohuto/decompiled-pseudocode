/*
 * XREFs of sub_14056D650 @ 0x14056D650
 * Callers:
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 * Callees:
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 *     sub_14056D6C8 @ 0x14056D6C8 (sub_14056D6C8.c)
 */

__int64 sub_14056D650()
{
  unsigned int v0; // eax

  if ( !_bittest64(&qword_140D068D8, 0x28u) )
    return 3221225659LL;
  v0 = sub_1404205F0(3u);
  return sub_14056D6C8(v0);
}
