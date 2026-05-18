/*
 * XREFs of sub_18008CF88 @ 0x18008CF88
 * Callers:
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 * Callees:
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 */

__int64 __fastcall sub_18008CF88(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+20h] [rbp-38h]

  v6 = a3;
  sub_18008D07C(a1, a2, a3, a4, v6);
  return a1;
}
