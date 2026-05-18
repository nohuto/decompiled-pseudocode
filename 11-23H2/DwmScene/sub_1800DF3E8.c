/*
 * XREFs of sub_1800DF3E8 @ 0x1800DF3E8
 * Callers:
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 * Callees:
 *     sub_180042890 @ 0x180042890 (sub_180042890.c)
 */

unsigned __int64 __fastcall sub_1800DF3E8(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_180042890((__int64)a1, a1[2] + 1LL);
  return sub_1800DF228(a1, v2);
}
