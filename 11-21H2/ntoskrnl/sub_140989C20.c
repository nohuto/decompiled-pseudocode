/*
 * XREFs of sub_140989C20 @ 0x140989C20
 * Callers:
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_140989C20(char a1)
{
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  BYTE1(xmmword_140C548E0) ^= (BYTE1(xmmword_140C548E0) ^ (4 * a1)) & 0xC;
  sub_1403697C8(8);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
