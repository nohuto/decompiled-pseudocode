/*
 * XREFs of RaidAdapterMFNDNameSpaceWrite @ 0x1C0036658
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorLogMFNDNameSpaceWrite @ 0x1C003E15C (StorLogMFNDNameSpaceWrite.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceWrite(__int64 a1, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int16 v3; // r9
  _IRP *MasterIrp; // rbx
  struct _MDL *MdlAddress; // rdx
  unsigned int Options; // ecx
  int Length; // r14d
  bool v10; // zf
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edi
  int MdlAddress_high; // ecx
  int v16; // eax
  __int64 v17; // r8
  int v18; // edx
  int v20; // [rsp+70h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  MdlAddress = Irp->MdlAddress;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Irp->IoStatus.Information = 0LL;
  v10 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v20 = 0;
  if ( v10 || !*(_QWORD *)(a1 + 5968) )
  {
    v14 = -1073741637;
  }
  else
  {
    if ( Options >= 0x20 )
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
              if ( Length && MdlAddress )
              {
                v13 = StorMFNDNameSpaceReadWrite(
                        a1,
                        0,
                        MdlAddress_low,
                        *(_QWORD *)&MasterIrp->Flags,
                        IrpCount,
                        BYTE4(MasterIrp->MdlAddress) & 1,
                        MdlAddress,
                        Length,
                        (__int64)&v20);
                v3 = v20;
                v14 = v13;
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
    v14 = -1073741811;
  }
  if ( !MasterIrp )
  {
    v18 = -1;
    MdlAddress_high = -1;
    v16 = -1;
    LODWORD(v17) = -1;
    goto LABEL_17;
  }
LABEL_15:
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v16 = MasterIrp->AssociatedIrp.IrpCount;
  v17 = *(_QWORD *)&MasterIrp->Flags;
  v18 = LOWORD(MasterIrp->MdlAddress);
LABEL_17:
  StorLogMFNDNameSpaceWrite(a1, v18, v17, v16, MdlAddress_high, Length, v3, v14);
  return RaidCompleteRequestEx(Irp, 0, v14);
}
