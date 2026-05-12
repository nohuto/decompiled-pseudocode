/*
 * XREFs of sub_1C00AB070 @ 0x1C00AB070
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0041748 @ 0x1C0041748 (sub_1C0041748.c)
 */

NTSTATUS __fastcall sub_1C00AB070(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  unsigned int v3; // r8d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int MdlAddress_high; // ecx
  int Flags; // eax
  unsigned int v10; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_19;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x1C )
  {
    v3 = -1073741820;
    goto LABEL_20;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 28
    || *(_DWORD *)(&MasterIrp->Size + 1) != 28
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 3
    || (Flags = MasterIrp->Flags, Flags >= 0) && Flags != 1 )
  {
LABEL_19:
    v3 = -1073741811;
    goto LABEL_20;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  if ( MdlAddress_high == 1 )
  {
    v10 = sub_1C0041748((__int64)MasterIrp, 1LL);
  }
  else
  {
    if ( MdlAddress_high != 2 )
      goto LABEL_20;
    if ( !sub_1C0004890(a1, 14) )
    {
      v3 = -1073741637;
      goto LABEL_20;
    }
    v10 = sub_1C0018524(*(_QWORD *)(a1 + 24) + 336LL);
  }
  v3 = v10;
LABEL_20:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v3);
}
