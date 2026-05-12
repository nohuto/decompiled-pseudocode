/*
 * XREFs of sub_1C00A2E7C @ 0x1C00A2E7C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001EB88 @ 0x1C001EB88 (sub_1C001EB88.c)
 *     sub_1C001F1CC @ 0x1C001F1CC (sub_1C001F1CC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C00327CC @ 0x1C00327CC (sub_1C00327CC.c)
 *     sub_1C0078E58 @ 0x1C0078E58 (sub_1C0078E58.c)
 */

NTSTATUS __fastcall sub_1C00A2E7C(__int64 a1, IRP *a2)
{
  __int64 v2; // r15
  char v5; // si
  char v6; // bp
  char v7; // r14
  bool v8; // di
  int v9; // eax
  struct _IRP *MasterIrp; // rcx
  char *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-78h]
  GUID v14; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v14 = 0LL;
  if ( byte_1C0093BE8 )
  {
    IoGetActivityIdIrp(a2, &v14);
    if ( (byte_1C0093A03 & 1) != 0 )
      sub_1C00327CC(
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        &stru_1C0089620,
        &v14,
        a2,
        a2->Tail.Overlay.CurrentStackLocation->MajorFunction,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
  }
  v5 = *(_BYTE *)(a1 + 98);
  v6 = *(_BYTE *)(a1 + 97);
  v7 = *(_BYTE *)(a1 + 96);
  v8 = sub_1C001F1CC((__int64)a2);
  if ( v8 )
    v9 = sub_1C0078E58(a2);
  else
    v9 = sub_1C001EB88(a2);
  if ( v9 < 0 )
    return sub_1C0003440(a2, 0, 0xC0000010);
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
    return sub_1C0003440(a2, 0, 0xC0000010);
  }
  HIBYTE(MasterIrp->Size) = v7;
  *((_BYTE *)&MasterIrp->Size + 2) = v6;
  *((_BYTE *)&MasterIrp->Size + 3) = v5;
LABEL_9:
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 8) != 0 )
    {
      LODWORD(v13) = 0;
      sub_1C003275C(0LL, &stru_1C0089210, &v14, a2, v13);
    }
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
}
