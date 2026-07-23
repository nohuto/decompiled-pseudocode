/*
 * XREFs of sub_1406A6ECC @ 0x1406A6ECC
 * Callers:
 *     sub_1406A62C8 @ 0x1406A62C8 (sub_1406A62C8.c)
 *     sub_1406A6AF8 @ 0x1406A6AF8 (sub_1406A6AF8.c)
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 * Callees:
 *     sub_1406A6F00 @ 0x1406A6F00 (sub_1406A6F00.c)
 */

_QWORD *__fastcall sub_1406A6ECC(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_1406A6F00(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
