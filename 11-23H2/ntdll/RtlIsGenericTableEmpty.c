/*
 * XREFs of RtlIsGenericTableEmpty @ 0x180080D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsGenericTableEmpty(PRTL_GENERIC_TABLE Table)
{
  return Table->TableRoot == 0LL;
}
