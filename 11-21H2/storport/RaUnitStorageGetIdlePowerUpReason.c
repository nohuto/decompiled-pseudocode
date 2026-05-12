/*
 * XREFs of RaUnitStorageGetIdlePowerUpReason @ 0x1C008F47C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     Feature_1195765048__private_IsEnabled @ 0x1C00239F0 (Feature_1195765048__private_IsEnabled.c)
 */

__int64 __fastcall RaUnitStorageGetIdlePowerUpReason(__int64 a1, IRP *a2)
{
  int IsEnabled; // eax
  unsigned int v5; // r8d
  bool v6; // zf
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *v8; // rcx
  _IRP *MasterIrp; // rdx

  IsEnabled = Feature_1195765048__private_IsEnabled();
  v5 = 0;
  v6 = IsEnabled == 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( v6 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      goto LABEL_3;
    }
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( (char *)&MasterIrp->MdlAddress + 4 <= (char *)MasterIrp + *(unsigned int *)(&MasterIrp->Size + 1)
      && *(_DWORD *)&MasterIrp->Type )
    {
      LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 816);
      goto LABEL_11;
    }
    a2->IoStatus.Information = 0LL;
LABEL_13:
    v5 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length >= 0xC )
  {
    v8 = a2->AssociatedIrp.MasterIrp;
    if ( v8 )
    {
      *(_DWORD *)&v8->Type = 1;
      *(_DWORD *)(&v8->Size + 1) = 12;
      LODWORD(v8->MdlAddress) = *(_DWORD *)(a1 + 816);
LABEL_11:
      a2->IoStatus.Information = 12LL;
      return RaidCompleteRequestEx(a2, 0, v5);
    }
    goto LABEL_13;
  }
LABEL_3:
  v5 = -1073741789;
  return RaidCompleteRequestEx(a2, 0, v5);
}
