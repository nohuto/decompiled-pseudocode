/*
 * XREFs of ntoskrnl_19 @ 0x14041DE80
 * Callers:
 *     sub_14065F700 @ 0x14065F700 (sub_14065F700.c)
 *     sub_1406C13E4 @ 0x1406C13E4 (sub_1406C13E4.c)
 *     sub_1406C2770 @ 0x1406C2770 (sub_1406C2770.c)
 *     sub_1406CDA50 @ 0x1406CDA50 (sub_1406CDA50.c)
 *     sub_1406CE6C0 @ 0x1406CE6C0 (sub_1406CE6C0.c)
 *     sub_1406E7910 @ 0x1406E7910 (sub_1406E7910.c)
 *     sub_1409486E4 @ 0x1409486E4 (sub_1409486E4.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ntoskrnl_19(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
