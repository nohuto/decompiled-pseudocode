/*
 * XREFs of sub_1402D19D8 @ 0x1402D19D8
 * Callers:
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     sub_1403965A0 @ 0x1403965A0 (sub_1403965A0.c)
 *     sub_140561D38 @ 0x140561D38 (sub_140561D38.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14080A890 @ 0x14080A890 (sub_14080A890.c)
 *     sub_14094C79C @ 0x14094C79C (sub_14094C79C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402D19D8(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
