/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     PortPassThroughBasicValidation @ 0x1C001DED8 (PortPassThroughBasicValidation.c)
 *     IsScsiPassThroughEx @ 0x1C001E51C (IsScsiPassThroughEx.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C00322B8 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     PortPassThroughExBasicValidation @ 0x1C0078628 (PortPassThroughExBasicValidation.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r15
  char v5; // si
  char v6; // bp
  char v7; // r14
  bool v8; // di
  int v9; // eax
  _IRP *MasterIrp; // rcx
  char *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-78h]
  GUID v14; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v14 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v14);
    if ( (byte_1C0092A03 & 1) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &v14,
        a2,
        a2->Tail.Overlay.CurrentStackLocation->MajorFunction,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
  }
  v5 = *(_BYTE *)(a1 + 98);
  v6 = *(_BYTE *)(a1 + 97);
  v7 = *(_BYTE *)(a1 + 96);
  v8 = IsScsiPassThroughEx((__int64)a2);
  if ( v8 )
    v9 = PortPassThroughExBasicValidation(a2);
  else
    v9 = PortPassThroughBasicValidation(a2);
  if ( v9 < 0 )
    return RaidCompleteRequestEx(a2, 0, 0xC0000010);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( v8 )
  {
    v12 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v12 <= 1u && HIDWORD(MasterIrp->MdlAddress) >= 0xC )
    {
      *(_DWORD *)v12 = 1;
      *((_DWORD *)v12 + 1) = 4;
      v12[8] = v7;
      v12[9] = v6;
      v12[10] = v5;
      v12[11] = 0;
      goto LABEL_9;
    }
    return RaidCompleteRequestEx(a2, 0, 0xC0000010);
  }
  HIBYTE(MasterIrp->Size) = v7;
  *((_BYTE *)&MasterIrp->Size + 2) = v6;
  *((_BYTE *)&MasterIrp->Size + 3) = v5;
LABEL_9:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 8) != 0 )
    {
      LODWORD(v13) = 0;
      McTemplateK0pd_EtwWriteTransfer(0LL, &EventNonReadWriteRequestComplete, &v14, a2, v13);
    }
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
}
