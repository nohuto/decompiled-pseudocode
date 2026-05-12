/*
 * XREFs of RaidAdapterMFNDNameSpaceRead @ 0x1C0036530
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorLogMFNDNameSpaceRead @ 0x1C003DF64 (StorLogMFNDNameSpaceRead.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceRead(__int64 a1, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v4; // r14d
  _IRP *MasterIrp; // rbx
  unsigned __int64 Length; // rbp
  struct _MDL *MdlAddress; // r9
  bool v8; // zf
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  signed int v11; // edi
  int MdlAddress_high; // ecx
  int v13; // r9d
  __int64 v14; // r8
  int v15; // edx
  int v17; // [rsp+70h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = a1;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  MdlAddress = Irp->MdlAddress;
  Irp->IoStatus.Information = 0LL;
  v8 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v17 = 0;
  if ( v8 || !*(_QWORD *)(a1 + 5968) )
  {
    v11 = -1073741637;
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Create.Options >= 0x20 )
    {
      if ( MasterIrp )
      {
        if ( MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
        {
          MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
          if ( (_WORD)MdlAddress_low )
          {
            IrpCount = MasterIrp->AssociatedIrp.IrpCount;
            if ( IrpCount )
            {
              if ( (_DWORD)Length && MdlAddress )
              {
                LOBYTE(CurrentStackLocation) = 1;
                v11 = StorMFNDNameSpaceReadWrite(
                        v4,
                        (int)CurrentStackLocation,
                        MdlAddress_low,
                        *(_QWORD *)&MasterIrp->Flags,
                        IrpCount,
                        BYTE4(MasterIrp->MdlAddress) & 1,
                        MdlAddress,
                        Length,
                        (__int64)&v17);
                if ( v11 >= 0 )
                  Irp->IoStatus.Information = Length;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v11 = -1073741811;
  }
  if ( !MasterIrp )
  {
    v15 = -1;
    MdlAddress_high = -1;
    v13 = -1;
    LODWORD(v14) = -1;
    goto LABEL_18;
  }
LABEL_16:
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v13 = MasterIrp->AssociatedIrp.IrpCount;
  v14 = *(_QWORD *)&MasterIrp->Flags;
  v15 = LOWORD(MasterIrp->MdlAddress);
LABEL_18:
  StorLogMFNDNameSpaceRead(v4, v15, v14, v13, MdlAddress_high, v17, v11);
  return RaidCompleteRequestEx(Irp, 0, v11);
}
