/*
 * XREFs of sub_140953950 @ 0x140953950
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_140953950(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
  if ( a1 == *(_QWORD *)(*(_QWORD *)result + 120LL) )
    *(_QWORD *)(*(_QWORD *)result + 120LL) = 0LL;
  result[2] |= 0x20u;
  return result;
}
