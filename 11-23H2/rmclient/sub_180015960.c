/*
 * XREFs of sub_180015960 @ 0x180015960
 * Callers:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 * Callees:
 *     sub_180015484 @ 0x180015484 (sub_180015484.c)
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 */

char __fastcall sub_180015960(volatile signed __int32 *a1)
{
  char v2; // bl
  char v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  sub_180015484(a1, &v6);
  v2 = v6 & 1;
  sub_1800157A4(a1, v6 & 1, v3, v4);
  return v2;
}
