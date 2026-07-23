/*
 * XREFs of sub_14082876C @ 0x14082876C
 * Callers:
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_140992C10 @ 0x140992C10 (sub_140992C10.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403B6BDC @ 0x1403B6BDC (sub_1403B6BDC.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 */

void __fastcall sub_14082876C(char a1, char a2)
{
  if ( a2 )
    sub_1403B6BDC(0);
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  HIBYTE(xmmword_140C5ACC0) ^= (HIBYTE(xmmword_140C5ACC0) ^ (4 * a1)) & 4;
  BYTE1(xmmword_140C548E0) = byte_140C54E98 & 1 | BYTE1(xmmword_140C548E0) & 0xFC | (2 * (byte_140C54E99 & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &xmmword_140C5ACC0, 0x40u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, &xmmword_140C548E0, 0x20u, 0LL);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
