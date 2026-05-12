/*
 * XREFs of RaidAdapterDisableMFNDInterface @ 0x1C00348C8
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableMFNDInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5888) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5880), 0);
  return result;
}
