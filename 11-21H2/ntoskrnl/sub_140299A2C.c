/*
 * XREFs of sub_140299A2C @ 0x140299A2C
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     sub_140299E04 @ 0x140299E04 (sub_140299E04.c)
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 */

__int64 __fastcall sub_140299A2C(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( dword_140C54ED8 )
    return sub_140A6F1FC(a1, a2, a3, a4, a5, a6);
  else
    return sub_140299E04(a1, a2, a3, a4, a5, a6);
}
