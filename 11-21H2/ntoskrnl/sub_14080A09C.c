/*
 * XREFs of sub_14080A09C @ 0x14080A09C
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_14080A09C(__int64 a1, int a2)
{
  __int64 v3; // rdi

  v3 = qword_140C21FA8;
  if ( !byte_140C245F0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    BYTE8(xmmword_140C54798) |= 2u;
    qword_140C548F8 = v3;
    BYTE10(xmmword_140C54798) ^= (a2 ^ BYTE10(xmmword_140C54798)) & 0x3F;
    byte_140C548F7 ^= (byte_140C548F7 ^ HIBYTE(a2)) & 0xF;
    sub_1403697C8(3);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
}
