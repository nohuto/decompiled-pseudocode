/*
 * XREFs of sub_1C000FFBC @ 0x1C000FFBC
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C000FFBC(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rsi
  unsigned int v3; // ebx
  int v6; // r8d
  unsigned int Length; // edx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v6 )
  {
    if ( v6 == 1 )
      return sub_1C0003440(a2, 0, v3);
    v3 = -1073741637;
LABEL_10:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v3);
  }
  if ( Length < 0xC )
  {
    if ( Length >= 8 )
    {
      *(_DWORD *)&MasterIrp->Type = 12;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      a2->IoStatus.Information = 8LL;
      return sub_1C0003440(a2, 0, v3);
    }
    v3 = -1073741789;
    goto LABEL_10;
  }
  memset_0(MasterIrp, 0, Length);
  *(_DWORD *)&MasterIrp->Type = 12;
  *(_DWORD *)(&MasterIrp->Size + 1) = 12;
  LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4592LL);
  a2->IoStatus.Information = 12LL;
  return sub_1C0003440(a2, 0, v3);
}
