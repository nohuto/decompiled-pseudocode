/*
 * XREFs of RaidAdapterDisableNonPoFxMiniportInterface @ 0x1C003562C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableNonPoFxMiniportInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5648) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5640), 0);
  return result;
}
