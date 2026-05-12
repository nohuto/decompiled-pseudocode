/*
 * XREFs of sub_1C00AB008 @ 0x1C00AB008
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00AB008(__int64 a1, IRP *a2)
{
  unsigned int v3; // r8d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rcx

  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length >= 0xC )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
    {
      *(_DWORD *)&MasterIrp->Type = 1;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 872);
      a2->IoStatus.Information = 12LL;
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741789;
  }
  return sub_1C0003440(a2, 0, v3);
}
