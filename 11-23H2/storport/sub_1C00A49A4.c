/*
 * XREFs of sub_1C00A49A4 @ 0x1C00A49A4
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A49A4(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  size_t Length; // r8
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v9; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v7 = -1073741637;
      return sub_1C0003440(a2, 0, v7);
    }
  }
  else
  {
    if ( (unsigned int)Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = -1073741789;
      return sub_1C0003440(a2, 0, v7);
    }
    if ( (unsigned int)Length >= 0x10 )
    {
      memset_0(MasterIrp, 0, Length);
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 )
      {
        LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(v9 + 552);
        HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 548LL);
      }
      a2->IoStatus.Information = 16LL;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
    }
  }
  v7 = 0;
  return sub_1C0003440(a2, 0, v7);
}
