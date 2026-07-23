/*
 * XREFs of sub_140336AD8 @ 0x140336AD8
 * Callers:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_140227E94 @ 0x140227E94 (sub_140227E94.c)
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024C4D8 @ 0x14024C4D8 (sub_14024C4D8.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_140256158 @ 0x140256158 (sub_140256158.c)
 *     sub_14025C03C @ 0x14025C03C (sub_14025C03C.c)
 *     sub_14025D494 @ 0x14025D494 (sub_14025D494.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_14029BA28 @ 0x14029BA28 (sub_14029BA28.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140399444 @ 0x140399444 (sub_140399444.c)
 *     sub_1403D820C @ 0x1403D820C (sub_1403D820C.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1405BACCC @ 0x1405BACCC (sub_1405BACCC.c)
 *     sub_1405BB938 @ 0x1405BB938 (sub_1405BB938.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 */

__int64 __fastcall sub_140336AD8(__int64 a1)
{
  __int64 result; // rax

  result = sub_1403377E0(a1);
  if ( (_DWORD)result )
  {
    sub_140338500(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    return 1LL;
  }
  return result;
}
