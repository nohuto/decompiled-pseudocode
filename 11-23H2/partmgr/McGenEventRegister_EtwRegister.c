/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C000B2BC
 * Callers:
 *     DriverEntry @ 0x1C002A078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !Microsoft_Windows_Partition_Context )
    return EtwRegister(
             &Microsoft_Windows_Partition,
             McGenControlCallbackV2,
             &Microsoft_Windows_Partition_Context,
             &Microsoft_Windows_Partition_Context);
  return result;
}
