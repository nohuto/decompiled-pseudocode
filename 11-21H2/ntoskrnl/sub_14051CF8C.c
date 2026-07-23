/*
 * XREFs of sub_14051CF8C @ 0x14051CF8C
 * Callers:
 *     sub_14051D1A0 @ 0x14051D1A0 (sub_14051D1A0.c)
 *     sub_140909678 @ 0x140909678 (sub_140909678.c)
 * Callees:
 *     sub_1403B4C50 @ 0x1403B4C50 (sub_1403B4C50.c)
 */

bool __fastcall sub_14051CF8C(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return sub_1403B4C50(a1[2], a1[16]);
  return result;
}
