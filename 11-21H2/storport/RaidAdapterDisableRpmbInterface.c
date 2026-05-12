/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C00349A4
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[338].Buffer )
    return IoSetDeviceInterfaceState(a1 + 338, 0);
  return result;
}
