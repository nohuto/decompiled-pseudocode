/*
 * XREFs of PortpPassThroughZeroUnusedBuffers @ 0x1C0022128
 * Callers:
 *     PortPassThroughExValidate @ 0x1C00691C4 (PortPassThroughExValidate.c)
 *     PortPassThroughValidate @ 0x1C0088D2C (PortPassThroughValidate.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
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
    return (unsigned int *)memset((void *)(*(_QWORD *)(a1 + 24) + v2), 0, v3 - (unsigned int)v2);
  return result;
}
