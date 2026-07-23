/*
 * XREFs of sub_1403B4C50 @ 0x1403B4C50
 * Callers:
 *     sub_14051CF8C @ 0x14051CF8C (sub_14051CF8C.c)
 *     sub_14051D410 @ 0x14051D410 (sub_14051D410.c)
 *     sub_14084F1B0 @ 0x14084F1B0 (sub_14084F1B0.c)
 *     sub_14084F290 @ 0x14084F290 (sub_14084F290.c)
 *     sub_140909764 @ 0x140909764 (sub_140909764.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403B4C50(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= dword_140C4B06C )
    return a2 < dword_140C4B0F8 + dword_140C4B06C;
  return v2;
}
