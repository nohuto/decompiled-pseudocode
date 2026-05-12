/*
 * XREFs of StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1C0090710
 * Callers:
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C008F6D0 (RaUnitStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall StorUnitQueryDeviceIdentifyIoCommandSetProperty(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  const void *v4; // rdx
  int v5; // ecx

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x1000 )
  {
    v2 = -1073741789;
LABEL_7:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v2);
  }
  v4 = *(const void **)(a1 + 3424);
  if ( !v4 )
    goto LABEL_6;
  v5 = *(_DWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1);
  if ( !v5 )
  {
    memmove(a2->AssociatedIrp.MasterIrp, v4, 0x1000uLL);
    a2->IoStatus.Information = 4096LL;
    return RaidCompleteRequestEx(a2, 0, v2);
  }
  if ( v5 != 1 )
  {
LABEL_6:
    v2 = -1073741637;
    goto LABEL_7;
  }
  return RaidCompleteRequestEx(a2, 0, v2);
}
