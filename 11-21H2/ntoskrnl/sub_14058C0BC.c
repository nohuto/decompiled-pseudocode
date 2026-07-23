/*
 * XREFs of sub_14058C0BC @ 0x14058C0BC
 * Callers:
 *     sub_1403885EC @ 0x1403885EC (sub_1403885EC.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14058C0BC(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // r8
  _QWORD **v3; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 80);
  v3 = *(_QWORD ***)(a1 + 80);
  result = *v3;
  while ( v3 != a2 )
  {
    v2 = v3;
    v3 = (_QWORD **)result;
    result = (_QWORD *)*result;
  }
  *v2 = result;
  return result;
}
