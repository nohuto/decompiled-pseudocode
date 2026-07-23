/*
 * XREFs of sub_1407DA8F4 @ 0x1407DA8F4
 * Callers:
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1409881B4 @ 0x1409881B4 (sub_1409881B4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1407DA8F4(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = *v1;
    result = v1;
    --*(_WORD *)(a1 + 10);
  }
  return result;
}
