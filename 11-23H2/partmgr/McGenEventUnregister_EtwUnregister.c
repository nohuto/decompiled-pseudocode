/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C000EF90
 * Callers:
 *     ?PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00268E0 (-PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !Microsoft_Windows_Partition_Context )
    return 0;
  result = EtwUnregister(Microsoft_Windows_Partition_Context);
  Microsoft_Windows_Partition_Context = 0LL;
  return result;
}
