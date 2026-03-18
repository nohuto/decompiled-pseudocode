/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1405D360C
 * Callers:
 *     CarLoggingExit @ 0x1405D3470 (CarLoggingExit.c)
 * Callees:
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !EtwProvider_Context[0] )
    return 0;
  result = EtwUnregister(EtwProvider_Context[0]);
  EtwProvider_Context[0] = 0LL;
  return result;
}
