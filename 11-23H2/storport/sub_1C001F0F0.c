/*
 * XREFs of sub_1C001F0F0 @ 0x1C001F0F0
 * Callers:
 *     sub_1C00791EC @ 0x1C00791EC (sub_1C00791EC.c)
 *     sub_1C00A3200 @ 0x1C00A3200 (sub_1C00A3200.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

unsigned int *__fastcall sub_1C001F0F0(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v2; // r9
  unsigned int v3; // edx

  result = *(unsigned int **)(a1 + 184);
  v2 = result[4];
  v3 = result[2];
  if ( v3 > (unsigned int)v2 )
    return (unsigned int *)memset_0((void *)(*(_QWORD *)(a1 + 24) + v2), 0, v3 - (unsigned int)v2);
  return result;
}
