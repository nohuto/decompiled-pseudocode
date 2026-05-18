/*
 * XREFs of sub_18002AE4C @ 0x18002AE4C
 * Callers:
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 *     sub_18002B890 @ 0x18002B890 (sub_18002B890.c)
 *     sub_18002BAB4 @ 0x18002BAB4 (sub_18002BAB4.c)
 *     sub_18002C0C0 @ 0x18002C0C0 (sub_18002C0C0.c)
 *     sub_1800A0D88 @ 0x1800A0D88 (sub_1800A0D88.c)
 *     sub_1800A1684 @ 0x1800A1684 (sub_1800A1684.c)
 *     sub_1800A1768 @ 0x1800A1768 (sub_1800A1768.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18002AE7C @ 0x18002AE7C (sub_18002AE7C.c)
 */

__int64 __fastcall sub_18002AE4C(void **a1, __int64 a2)
{
  sub_18002AE7C(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x58uLL);
}
