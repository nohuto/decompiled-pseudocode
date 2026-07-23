/*
 * XREFs of sub_140998888 @ 0x140998888
 * Callers:
 *     sub_1403DA240 @ 0x1403DA240 (sub_1403DA240.c)
 *     sub_14099862C @ 0x14099862C (sub_14099862C.c)
 *     sub_140998678 @ 0x140998678 (sub_140998678.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140998888(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = a1;
  sub_140A47CF8(a1, a2);
  if ( qword_140C5AD90 )
  {
    LOBYTE(v4) = v2;
    sub_14042A5E0(v4, v3);
  }
  return sub_140A48330(v4);
}
