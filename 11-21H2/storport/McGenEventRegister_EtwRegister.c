/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C003D318
 * Callers:
 *     RaInitializeDriver @ 0x1C008DF80 (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !StorPortEventProvider_Context )
    return EtwRegister(
             &StorPortEventProvider,
             McGenControlCallbackV2,
             &StorPortEventProvider_Context,
             &StorPortEventProvider_Context);
  return result;
}
