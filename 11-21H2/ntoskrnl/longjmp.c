/*
 * XREFs of longjmp @ 0x1403DF970
 * Callers:
 *     sub_1403A2670 @ 0x1403A2670 (sub_1403A2670.c)
 *     sub_1403A26C0 @ 0x1403A26C0 (sub_1403A26C0.c)
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 *     sub_1403CC390 @ 0x1403CC390 (sub_1403CC390.c)
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 *     sub_1403D8160 @ 0x1403D8160 (sub_1403D8160.c)
 *     sub_140534FB0 @ 0x140534FB0 (sub_140534FB0.c)
 *     sub_140535110 @ 0x140535110 (sub_140535110.c)
 *     sub_140535190 @ 0x140535190 (sub_140535190.c)
 *     sub_1405353C0 @ 0x1405353C0 (sub_1405353C0.c)
 *     sub_140536120 @ 0x140536120 (sub_140536120.c)
 *     sub_1405361D0 @ 0x1405361D0 (sub_1405361D0.c)
 *     sub_1405368B0 @ 0x1405368B0 (sub_1405368B0.c)
 *     sub_140536980 @ 0x140536980 (sub_140536980.c)
 *     sub_140536BA0 @ 0x140536BA0 (sub_140536BA0.c)
 *     sub_140536D58 @ 0x140536D58 (sub_140536D58.c)
 * Callees:
 *     sub_140236890 @ 0x140236890 (sub_140236890.c)
 *     sub_14041AF90 @ 0x14041AF90 (sub_14041AF90.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  sub_140236890(Buf[5].Part[0], Buf[1].Part[0]);
  sub_14041AF90(Buf, (unsigned int)Value);
}
