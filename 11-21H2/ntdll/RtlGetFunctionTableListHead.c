/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800EBD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY RtlGetFunctionTableListHead(void)
{
  return (PLIST_ENTRY)&RtlpDynamicFunctionTable;
}
