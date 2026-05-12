/*
 * XREFs of PmIoctlDsm @ 0x1C001D9C0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 *     ?PmIoctlDsmConversionQuery@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E800 (-PmIoctlDsmConversionQuery@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall PmIoctlDsm(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r11
  unsigned int Options; // r9d
  struct _IRP *MasterIrp; // rcx
  unsigned int v7; // ebx
  unsigned int v9; // edx
  unsigned int IrpCount; // r8d
  bool v11; // zf
  unsigned int MdlAddress_high; // r9d
  bool v13; // cf

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
  {
    v7 = -1073741820;
    goto LABEL_20;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == -2147483620 )
  {
    v9 = *(&MasterIrp->Flags + 1);
    if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
    {
      if ( v9 )
        goto LABEL_22;
      IrpCount = MasterIrp->AssociatedIrp.IrpCount;
      v11 = IrpCount == 0;
    }
    else
    {
      if ( v9 < 0x1C )
        goto LABEL_22;
      if ( v9 > Options )
        goto LABEL_22;
      if ( (v9 & 7) != 0 )
        goto LABEL_22;
      IrpCount = MasterIrp->AssociatedIrp.IrpCount;
      if ( IrpCount < 0x10 || IrpCount > Options - v9 || (IrpCount & 0xF) != 0 )
        goto LABEL_22;
      v11 = IrpCount == 16;
    }
    if ( v11 )
    {
      MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
      v13 = v9 < MdlAddress_high;
      if ( v9 <= MdlAddress_high )
      {
LABEL_17:
        if ( !v13 || IrpCount + v9 <= MdlAddress_high )
        {
          if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
            v7 = -1073741789;
          else
            v7 = PmIoctlDsmConversionQuery(a1, a2);
          goto LABEL_20;
        }
        goto LABEL_22;
      }
      if ( MdlAddress_high + MasterIrp->Flags <= v9 )
      {
        v13 = v9 < MdlAddress_high;
        goto LABEL_17;
      }
    }
LABEL_22:
    v7 = -1073741811;
LABEL_20:
    a2->IoStatus.Status = v7;
    IofCompleteRequest(a2, 0);
    return v7;
  }
  return (unsigned int)PmIoctlRedirect(a1, a2);
}
