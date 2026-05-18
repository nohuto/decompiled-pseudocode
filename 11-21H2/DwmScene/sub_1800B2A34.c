/*
 * XREFs of sub_1800B2A34 @ 0x1800B2A34
 * Callers:
 *     sub_18002CA94 @ 0x18002CA94 (sub_18002CA94.c)
 * Callees:
 *     sub_1800B2890 @ 0x1800B2890 (sub_1800B2890.c)
 */

__int64 __fastcall sub_1800B2A34(__int64 a1)
{
  __int64 result; // rax

  sub_1800B2890((__int64 *)a1);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
