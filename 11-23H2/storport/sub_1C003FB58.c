/*
 * XREFs of sub_1C003FB58 @ 0x1C003FB58
 * Callers:
 *     sub_1C00A9738 @ 0x1C00A9738 (sub_1C00A9738.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_1C003FB58()
{
  NTSTATUS result; // eax

  if ( !RegHandle )
    return 0;
  result = EtwUnregister(RegHandle);
  RegHandle = 0LL;
  return result;
}
