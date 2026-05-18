/*
 * XREFs of sub_18002BF50 @ 0x18002BF50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A12D4 @ 0x1800A12D4 (sub_1800A12D4.c)
 */

__int64 __fastcall sub_18002BF50(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800A12D4(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
