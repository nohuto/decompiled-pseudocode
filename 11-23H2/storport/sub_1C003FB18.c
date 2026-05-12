/*
 * XREFs of sub_1C003FB18 @ 0x1C003FB18
 * Callers:
 *     sub_1C00A982C @ 0x1C00A982C (sub_1C00A982C.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_1C003FB18()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !RegHandle )
    return EtwRegister(&ProviderId, (PETWENABLECALLBACK)EnableCallback, &RegHandle, &RegHandle);
  return result;
}
