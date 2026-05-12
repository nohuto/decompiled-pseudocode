/*
 * XREFs of sub_1C0036A40 @ 0x1C0036A40
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003E534 @ 0x1C003E534 (sub_1C003E534.c)
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 */

__int64 __fastcall sub_1C0036A40(__int64 a1, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v4; // r14d
  struct _IRP *MasterIrp; // rbx
  ULONG_PTR Length; // rbp
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
                v11 = sub_1C00AD3A8(
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
  sub_1C003E534(v4, v15, v14, v13, MdlAddress_high, v17, v11);
  return sub_1C0003440(Irp, 0, v11);
}
