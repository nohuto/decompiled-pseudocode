/*
 * XREFs of sub_180063E08 @ 0x180063E08
 * Callers:
 *     sub_18005EC68 @ 0x18005EC68 (sub_18005EC68.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180063E08(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 344);
  return result;
}
