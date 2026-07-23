/*
 * XREFs of sub_1406DF7A0 @ 0x1406DF7A0
 * Callers:
 *     sub_1406DF688 @ 0x1406DF688 (sub_1406DF688.c)
 *     sub_1406DF748 @ 0x1406DF748 (sub_1406DF748.c)
 *     sub_140978260 @ 0x140978260 (sub_140978260.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

_QWORD *__fastcall sub_1406DF7A0(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = sub_1402828F0(256, (unsigned int)(8 * a1 + 8), 0x54446D4Du);
  if ( result )
    *result = a1;
  return result;
}
