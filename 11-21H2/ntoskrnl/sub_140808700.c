/*
 * XREFs of sub_140808700 @ 0x140808700
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_140808700(int a1)
{
  if ( !byte_140C245F0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    *(_QWORD *)&xmmword_140C54798 = 0LL;
    BYTE8(xmmword_140C54798) &= ~2u;
    BYTE11(xmmword_140C54798) ^= (a1 ^ BYTE11(xmmword_140C54798)) & 0x3F;
    byte_140C548F7 = byte_140C548F7 & 0xF | (16 * HIBYTE(a1));
    sub_1403697C8(3);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
}
