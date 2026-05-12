/*
 * XREFs of RaidAdapterStorageDeviceResetIoctl @ 0x1C0038904
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAdapterDeviceReset @ 0x1C003463C (RaidAdapterDeviceReset.c)
 */

__int64 __fastcall RaidAdapterStorageDeviceResetIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rdx
  unsigned int v4; // eax

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20
    && (MasterIrp = a2->AssociatedIrp.MasterIrp) != 0LL
    && *(_DWORD *)&MasterIrp->Type == 32
    && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
  {
    v4 = RaidAdapterDeviceReset(a1, (__int64)MasterIrp);
  }
  else
  {
    v4 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
