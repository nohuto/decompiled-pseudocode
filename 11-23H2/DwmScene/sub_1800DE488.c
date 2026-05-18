/*
 * XREFs of sub_1800DE488 @ 0x1800DE488
 * Callers:
 *     sub_1800DC194 @ 0x1800DC194 (sub_1800DC194.c)
 *     sub_1800DC450 @ 0x1800DC450 (sub_1800DC450.c)
 *     sub_1800DC718 @ 0x1800DC718 (sub_1800DC718.c)
 *     sub_1800DCAB4 @ 0x1800DCAB4 (sub_1800DCAB4.c)
 * Callees:
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 */

__int64 __fastcall sub_1800DE488(_QWORD *a1, __int64 *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800DDB4C(a1, (__int64)v3, a2) + 48LL;
}
