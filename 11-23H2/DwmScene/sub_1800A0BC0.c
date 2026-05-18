/*
 * XREFs of sub_1800A0BC0 @ 0x1800A0BC0
 * Callers:
 *     sub_18002B1A4 @ 0x18002B1A4 (sub_18002B1A4.c)
 * Callees:
 *     sub_1800A0A84 @ 0x1800A0A84 (sub_1800A0A84.c)
 */

__int64 __fastcall sub_1800A0BC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1800A0A84((_QWORD *)a1, a2);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
