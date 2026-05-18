/*
 * XREFs of sub_1800106DC @ 0x1800106DC
 * Callers:
 *     sub_1800103A0 @ 0x1800103A0 (sub_1800103A0.c)
 *     sub_180014EB0 @ 0x180014EB0 (sub_180014EB0.c)
 *     sub_180018A30 @ 0x180018A30 (sub_180018A30.c)
 *     sub_180018AC0 @ 0x180018AC0 (sub_180018AC0.c)
 *     sub_180018B50 @ 0x180018B50 (sub_180018B50.c)
 *     sub_180018BE0 @ 0x180018BE0 (sub_180018BE0.c)
 *     sub_180018C70 @ 0x180018C70 (sub_180018C70.c)
 *     sub_180018D00 @ 0x180018D00 (sub_180018D00.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800106DC(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
