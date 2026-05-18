/*
 * XREFs of sub_1800307C8 @ 0x1800307C8
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800307C8(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  sub_1800FC230(a1);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return sub_18000C8D4(a1 + 56, 24LL, 10LL);
}
