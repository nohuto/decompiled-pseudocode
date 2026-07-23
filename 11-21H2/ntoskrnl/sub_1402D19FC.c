/*
 * XREFs of sub_1402D19FC @ 0x1402D19FC
 * Callers:
 *     sub_1403965A0 @ 0x1403965A0 (sub_1403965A0.c)
 *     sub_14039A190 @ 0x14039A190 (sub_14039A190.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14080A890 @ 0x14080A890 (sub_14080A890.c)
 *     sub_14094B144 @ 0x14094B144 (sub_14094B144.c)
 *     sub_14094CBE0 @ 0x14094CBE0 (sub_14094CBE0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402D19FC(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( a1[v3 - 1] )
      return result;
    if ( !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
