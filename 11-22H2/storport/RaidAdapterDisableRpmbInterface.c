/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C00356D0
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[342].Buffer )
    return IoSetDeviceInterfaceState(a1 + 342, 0);
  return result;
}
