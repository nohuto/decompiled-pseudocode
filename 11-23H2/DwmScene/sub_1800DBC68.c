/*
 * XREFs of sub_1800DBC68 @ 0x1800DBC68
 * Callers:
 *     sub_18001EFA8 @ 0x18001EFA8 (sub_18001EFA8.c)
 *     sub_18001F098 @ 0x18001F098 (sub_18001F098.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800DBC68(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_18001C190();
  if ( result )
  {
    *result = lpMem;
    result[1] = a1;
  }
  lpMem = result;
  return result;
}
