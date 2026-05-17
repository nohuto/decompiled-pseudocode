/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800EB4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *RtlGetFunctionTableListHead()
{
  return &RtlpDynamicFunctionTable;
}
