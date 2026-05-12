/*
 * XREFs of sub_1C003869C @ 0x1C003869C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C003869C(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  struct _IRP *MasterIrp; // rcx
  int v6; // eax

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x18 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    *(_DWORD *)&MasterIrp->Type = 24;
    *(_DWORD *)(&MasterIrp->Size + 1) = *(_DWORD *)(a1 + 368);
    v6 = *(_DWORD *)(a1 + 372);
    HIDWORD(MasterIrp->MdlAddress) = 0;
    LODWORD(MasterIrp->MdlAddress) = v6;
    MasterIrp->Flags = *(_DWORD *)(a1 + 392);
    *((_BYTE *)&MasterIrp->Flags + 4) = 1;
    *((_BYTE *)&MasterIrp->Flags + 5) = *(_BYTE *)(a1 + 428);
    *((_BYTE *)&MasterIrp->Flags + 6) = 0;
    a2->IoStatus.Information = 24LL;
    v4 = 0;
  }
  else
  {
    v4 = -1073741789;
  }
  return sub_1C0003440(a2, 0, v4);
}
