/*
 * XREFs of sub_14099596C @ 0x14099596C
 * Callers:
 *     sub_1409959F8 @ 0x1409959F8 (sub_1409959F8.c)
 * Callees:
 *     sub_1408093DC @ 0x1408093DC (sub_1408093DC.c)
 *     sub_140864194 @ 0x140864194 (sub_140864194.c)
 *     sub_140998544 @ 0x140998544 (sub_140998544.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14099596C(int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = 26;
  sub_140A48330(a1);
  if ( dword_140C23318 )
  {
    if ( !(unsigned __int8)sub_140998544() )
      goto LABEL_7;
    v2 = 7;
  }
  else
  {
    v2 = 1;
  }
  sub_140864194(v2);
  v1 = 18;
  if ( dword_140C2331C == 1 )
  {
    v1 = 0;
    dword_140C22390 ^= ((unsigned __int8)dword_140C22390 ^ (unsigned __int8)dword_140C2344C) & 1;
  }
LABEL_7:
  v4 = ((unsigned __int8)dword_140C22390 ^ (unsigned __int8)dword_140C2344C) & 2;
  dword_140C22390 ^= v4;
  sub_140A47CF8(v3, v4);
  return sub_1408093DC(v1);
}
