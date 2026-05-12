/*
 * XREFs of RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C00228C4
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidQueryLedState @ 0x1C004F070 (RaidQueryLedState.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceLedStatePropertyIoctl(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  int v8; // ecx
  __int64 v9; // rcx
  int LedState; // eax

  v2 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( *(_DWORD *)(a1 + 3296) != 17 )
  {
LABEL_2:
    v2 = -1073741637;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v8 )
  {
    if ( v8 == 1 )
      return RaidCompleteRequestEx(a2, 0, v2);
    goto LABEL_2;
  }
  if ( (unsigned int)Length < 0x10 )
  {
    if ( (unsigned int)Length >= 8 )
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
      return RaidCompleteRequestEx(a2, 0, v2);
    }
    v2 = -1073741789;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(char *)(v9 + 109) < 0
    || (LedState = RaidQueryLedState(*(_QWORD *)(v9 + 8), v9 + 5624), v2 = LedState, LedState >= 0) )
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 16;
    *(_DWORD *)(&MasterIrp->Size + 1) = 16;
    MasterIrp->MdlAddress = (_MDL *)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 5624LL);
    a2->IoStatus.Information = 16LL;
    return RaidCompleteRequestEx(a2, 0, v2);
  }
  if ( LedState != -2147483643 )
LABEL_3:
    a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v2);
}
