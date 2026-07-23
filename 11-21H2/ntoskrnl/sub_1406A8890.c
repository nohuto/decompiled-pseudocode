/*
 * XREFs of sub_1406A8890 @ 0x1406A8890
 * Callers:
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_1406A8890(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rsi
  void *result; // rax

  v4 = a3;
  if ( a3 + *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 8) )
  {
    result = memmove(*(void **)(a1 + 24), a2, a3);
    *(_QWORD *)(a1 + 24) += v4;
    *(_DWORD *)(a1 + 20) += v4;
  }
  return result;
}
