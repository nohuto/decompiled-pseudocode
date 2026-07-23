/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800EB4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY RtlGetFunctionTableListHead(void)
{
  return (PLIST_ENTRY)&RtlpDynamicFunctionTable;
}
