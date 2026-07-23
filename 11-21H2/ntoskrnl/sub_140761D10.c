/*
 * XREFs of sub_140761D10 @ 0x140761D10
 * Callers:
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

_QWORD *__fastcall sub_140761D10(__int64 a1)
{
  _QWORD *result; // rax

  result = sub_1402828F0(64, 0xA0uLL, 0x644C6D4Du);
  if ( result )
  {
    result[14] = a1;
    *((_WORD *)result + 54) = 1;
    *((_DWORD *)result + 26) = 0x1000000;
    result[17] = -2LL;
  }
  return result;
}
