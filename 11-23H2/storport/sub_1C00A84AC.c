/*
 * XREFs of sub_1C00A84AC @ 0x1C00A84AC
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     sub_1C0041748 @ 0x1C0041748 (sub_1C0041748.c)
 */

__int64 __fastcall sub_1C00A84AC(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  unsigned int v3; // r8d
  int MdlAddress_high; // eax
  int Flags; // ecx
  unsigned int v8; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_17;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x1C )
  {
    v3 = -1073741820;
    goto LABEL_18;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 28
    || *(_DWORD *)(&MasterIrp->Size + 1) != 28
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 3
    || (Flags = MasterIrp->Flags, Flags >= 0) && Flags != 1 )
  {
LABEL_17:
    v3 = -1073741811;
    goto LABEL_18;
  }
  if ( MdlAddress_high == 1 )
  {
    v8 = sub_1C0041748((__int64)MasterIrp, 2LL);
  }
  else
  {
    if ( MdlAddress_high != 2 )
      goto LABEL_18;
    if ( !(unsigned int)sub_1C0007798(a1, 21) )
    {
      v3 = -1073741637;
      goto LABEL_18;
    }
    v8 = sub_1C001A364(a1 + 336);
  }
  v3 = v8;
LABEL_18:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v3);
}
