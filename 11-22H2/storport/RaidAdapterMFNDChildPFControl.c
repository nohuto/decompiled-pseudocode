/*
 * XREFs of RaidAdapterMFNDChildPFControl @ 0x1C0036324
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorLogMFNDChildPFControl @ 0x1C003DCB4 (StorLogMFNDChildPFControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorMFNDChildPFControl @ 0x1C00ABED0 (StorMFNDChildPFControl.c)
 */

__int64 __fastcall RaidAdapterMFNDChildPFControl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  bool v4; // zf
  int v5; // ebp
  unsigned __int16 v6; // r9
  __int64 IrpCount; // rdx
  unsigned __int16 MdlAddress; // ax
  signed int v9; // edi
  int v10; // eax
  int Flags; // r8d
  int MdlAddress_low; // edx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  a2->IoStatus.Information = 0LL;
  v4 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v5 = a1;
  v6 = 0;
  v15 = 0;
  if ( v4 || !*(_QWORD *)(a1 + 5968) )
  {
    v14 = -1073741637;
  }
  else
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20 )
    {
      if ( MasterIrp )
      {
        if ( MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
        {
          IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
          if ( (_DWORD)IrpCount )
          {
            if ( (int)IrpCount < 5 )
            {
              if ( (MasterIrp->Flags & 1) != 0 )
              {
                MdlAddress = -1;
                goto LABEL_12;
              }
              MdlAddress = (unsigned __int16)MasterIrp->MdlAddress;
              if ( MdlAddress )
              {
LABEL_12:
                v9 = StorMFNDChildPFControl(a1, IrpCount, MdlAddress, &v15);
                v6 = v15;
                v14 = v9;
                if ( v9 >= 0 )
                  goto LABEL_17;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v14 = -1073741811;
  }
LABEL_16:
  StorMapMFNDErrorToNtStatus(v6, &v14);
  v9 = v14;
  if ( !MasterIrp )
  {
    MdlAddress_low = -1;
    v10 = -1;
    Flags = -1;
    goto LABEL_19;
  }
LABEL_17:
  v10 = MasterIrp->AssociatedIrp.IrpCount;
  Flags = MasterIrp->Flags;
  MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
LABEL_19:
  StorLogMFNDChildPFControl(v5, MdlAddress_low, Flags, v10, v6, v9);
  return RaidCompleteRequestEx(a2, 0, v9);
}
