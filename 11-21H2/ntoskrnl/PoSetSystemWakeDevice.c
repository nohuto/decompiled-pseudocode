/*
 * XREFs of PoSetSystemWakeDevice @ 0x1405C6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_1405CFED4 @ 0x1405CFED4 (sub_1405CFED4.c)
 */

void *__fastcall PoSetSystemWakeDevice(__int64 a1)
{
  void *result; // rax
  void *v2; // rbx

  result = sub_14036B86C(a1, 0x72496F50u);
  v2 = result;
  if ( result )
  {
    sub_1405CFED4(result);
    return (void *)ObfDereferenceObjectWithTag(v2, 0x72496F50u);
  }
  return result;
}
