/*
 * XREFs of sub_180002244 @ 0x180002244
 * Callers:
 *     sub_180002210 @ 0x180002210 (sub_180002210.c)
 *     sub_1800192B0 @ 0x1800192B0 (sub_1800192B0.c)
 * Callees:
 *     sub_180002274 @ 0x180002274 (sub_180002274.c)
 */

__int64 __fastcall sub_180002244(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_180020950;
  result = sub_180002274();
  qword_1800328E0 = 0LL;
  byte_180032A20 = 0;
  return result;
}
