/*
 * XREFs of sub_14099F084 @ 0x14099F084
 * Callers:
 *     sub_14099F320 @ 0x14099F320 (sub_14099F320.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14099F084(_DWORD *a1, _DWORD *a2)
{
  _QWORD *result; // rax

  result = a1 + 2;
  if ( *a1 )
    result = (_QWORD *)*result;
  *a2 = a1[1];
  return result;
}
