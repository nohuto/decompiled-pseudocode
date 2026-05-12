/*
 * XREFs of sub_1C00A1314 @ 0x1C00A1314
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A1314(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rax
  unsigned int v3; // ebx

  if ( a2->RequestorMode )
  {
    v3 = -1073741808;
  }
  else if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    v3 = -1073741789;
  }
  else
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp && *(_DWORD *)&MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
    {
      v3 = 0;
      *(_QWORD *)(a1 + 3432) = MasterIrp->MdlAddress;
    }
    else
    {
      v3 = -1073741811;
    }
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
