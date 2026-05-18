/*
 * XREFs of sub_1800A7868 @ 0x1800A7868
 * Callers:
 *     sub_1800A7958 @ 0x1800A7958 (sub_1800A7958.c)
 *     sub_1800A7A24 @ 0x1800A7A24 (sub_1800A7A24.c)
 *     sub_1800A7B24 @ 0x1800A7B24 (sub_1800A7B24.c)
 * Callees:
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

_QWORD *__fastcall sub_1800A7868(_QWORD *a1)
{
  __int64 v2; // rax

  v2 = 16LL;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1 += 2;
    --v2;
  }
  while ( v2 );
  sub_1800126E8((__int64)a1, (__int64)a1);
  return a1;
}
