/*
 * XREFs of RaidAdapterMFNDChildPFControl @ 0x1C00354B8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorLogMFNDChildPFControl @ 0x1C003BEFC (StorLogMFNDChildPFControl.c)
 *     StorMFNDChildPFControl @ 0x1C0090BBC (StorMFNDChildPFControl.c)
 */

__int64 __fastcall RaidAdapterMFNDChildPFControl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rdi
  __int16 v3; // r8
  bool v5; // zf
  int v6; // esi
  __int64 IrpCount; // rdx
  unsigned __int16 MdlAddress; // ax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int Flags; // eax
  int MdlAddress_low; // edx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  v5 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v6 = a1;
  v15 = 0;
  if ( v5 || !*(_QWORD *)(a1 + 5904) )
  {
    v10 = -1073741637;
  }
  else
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20
      && MasterIrp
      && *(_DWORD *)&MasterIrp->Type == 32
      && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
    {
      IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
      if ( (_DWORD)IrpCount && (int)IrpCount < 5 )
      {
        if ( (MasterIrp->Flags & 1) != 0 )
        {
          MdlAddress = -1;
LABEL_12:
          v9 = StorMFNDChildPFControl(a1, IrpCount, MdlAddress, &v15);
          v3 = v15;
          v10 = v9;
          goto LABEL_17;
        }
        MdlAddress = (unsigned __int16)MasterIrp->MdlAddress;
        if ( MdlAddress )
          goto LABEL_12;
      }
      v10 = -1073741811;
      goto LABEL_17;
    }
    v10 = -1073741811;
  }
  if ( !MasterIrp )
  {
    MdlAddress_low = -1;
    v11 = -1;
    Flags = -1;
    goto LABEL_19;
  }
LABEL_17:
  v11 = MasterIrp->AssociatedIrp.IrpCount;
  Flags = MasterIrp->Flags;
  MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
LABEL_19:
  StorLogMFNDChildPFControl(v6, MdlAddress_low, Flags, v11, v3, v10);
  return RaidCompleteRequestEx(a2, 0, v10);
}
