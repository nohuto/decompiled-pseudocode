/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C000168C
 * Callers:
 *     DeviceRemove @ 0x1C0001420 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !EXBUSAUD_PROVIDER_Context )
    return 0;
  result = EtwUnregister(EXBUSAUD_PROVIDER_Context);
  EXBUSAUD_PROVIDER_Context = 0LL;
  return result;
}
