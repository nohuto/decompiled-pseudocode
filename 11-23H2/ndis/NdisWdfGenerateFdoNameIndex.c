/*
 * XREFs of NdisWdfGenerateFdoNameIndex @ 0x1C0060400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NdisWdfGenerateFdoNameIndex()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex);
}
