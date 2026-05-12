/*
 * XREFs of RaidAdapterDisableMFNDInterface @ 0x1C00355FC
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableMFNDInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5952) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5944), 0);
  return result;
}
