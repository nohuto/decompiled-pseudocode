/*
 * XREFs of sub_18005E22C @ 0x18005E22C
 * Callers:
 *     sub_18002A950 @ 0x18002A950 (sub_18002A950.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005E22C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 152);
  return result;
}
