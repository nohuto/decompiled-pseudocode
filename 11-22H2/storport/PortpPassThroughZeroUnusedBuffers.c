/*
 * XREFs of PortpPassThroughZeroUnusedBuffers @ 0x1C001E440
 * Callers:
 *     PortPassThroughExValidate @ 0x1C00789BC (PortPassThroughExValidate.c)
 *     PortPassThroughValidate @ 0x1C00A2050 (PortPassThroughValidate.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

unsigned int *__fastcall PortpPassThroughZeroUnusedBuffers(__int64 a1)
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
