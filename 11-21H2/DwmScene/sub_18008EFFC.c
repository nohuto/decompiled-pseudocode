/*
 * XREFs of sub_18008EFFC @ 0x18008EFFC
 * Callers:
 *     sub_18008ED2C @ 0x18008ED2C (sub_18008ED2C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008EFFC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = a3;
  while ( a1 != a2 )
    *result++ = *a1++;
  return result;
}
