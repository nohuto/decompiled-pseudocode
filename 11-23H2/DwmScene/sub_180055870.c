/*
 * XREFs of sub_180055870 @ 0x180055870
 * Callers:
 *     sub_1800558BC @ 0x1800558BC (sub_1800558BC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180055870(_DWORD *a1, _DWORD *a2)
{
  return a1 == a2
      || *a1 == *a2
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && a1[3] == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6];
}
