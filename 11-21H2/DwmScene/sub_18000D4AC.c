/*
 * XREFs of sub_18000D4AC @ 0x18000D4AC
 * Callers:
 *     sub_18000FED0 @ 0x18000FED0 (sub_18000FED0.c)
 * Callees:
 *     sub_18000F6D0 @ 0x18000F6D0 (sub_18000F6D0.c)
 */

_QWORD *__fastcall sub_18000D4AC(_QWORD *a1)
{
  _QWORD *result; // rax

  a1[21] = 0LL;
  a1[22] = 0LL;
  a1[1] = "unknown";
  *a1 = &wil::ResultException::`vftable';
  sub_18000F6D0(a1 + 2);
  a1[23] = 0LL;
  result = a1;
  a1[24] = 0LL;
  return result;
}
