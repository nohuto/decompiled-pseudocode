/*
 * XREFs of sub_140A13228 @ 0x140A13228
 * Callers:
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140A13228(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x9000 )
    return sub_14075B988(a1, v2);
  sub_14079499C(a1, v2);
  sub_1406E0C3C(1LL, (__int64)"SdbGetBinaryTagData");
  return 0LL;
}
