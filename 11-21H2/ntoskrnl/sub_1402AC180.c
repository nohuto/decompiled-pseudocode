/*
 * XREFs of sub_1402AC180 @ 0x1402AC180
 * Callers:
 *     sub_1406CB0F0 @ 0x1406CB0F0 (sub_1406CB0F0.c)
 *     sub_1407305B0 @ 0x1407305B0 (sub_1407305B0.c)
 *     sub_14097339C @ 0x14097339C (sub_14097339C.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 * Callees:
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 */

__int64 __fastcall sub_1402AC180(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  sub_1402210C0(a1, a2, &v4, a3);
  return v4;
}
