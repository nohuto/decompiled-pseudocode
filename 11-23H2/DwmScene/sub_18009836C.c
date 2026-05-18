/*
 * XREFs of sub_18009836C @ 0x18009836C
 * Callers:
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

__int64 __fastcall sub_18009836C(__int64 a1, __int64 a2, _BYTE *a3)
{
  sub_180017648((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 32) = *a3;
  return a1;
}
