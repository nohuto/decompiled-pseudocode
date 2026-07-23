/*
 * XREFs of sub_140A12218 @ 0x140A12218
 * Callers:
 *     sub_140A121C0 @ 0x140A121C0 (sub_140A121C0.c)
 * Callees:
 *     sub_140A12250 @ 0x140A12250 (sub_140A12250.c)
 */

__int64 __fastcall sub_140A12218(_DWORD *a1, char a2, unsigned int a3, unsigned int a4)
{
  if ( (a2 & 2) != 0 )
    return sub_140A12250(a1, a3, a4);
  *a1 = (a3 & a4) != 0;
  return 1LL;
}
