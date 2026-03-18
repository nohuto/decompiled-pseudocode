/*
 * XREFs of PnpSerializeBoot @ 0x1403B2B90
 * Callers:
 *     NtSerializeBoot @ 0x140861A50 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
