/*
 * XREFs of sub_1C00A2178 @ 0x1C00A2178
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00A2178(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdx
  unsigned int v4; // r8d

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    v4 = -1073741789;
  }
  else
  {
    *(_DWORD *)&MasterIrp->Type = 8;
    *((_BYTE *)&MasterIrp->Size + 2) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL);
    *((_BYTE *)&MasterIrp->Size + 3) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)&MasterIrp->Size + 4) = *(_BYTE *)(a1 + 97);
    v4 = 0;
    *((_BYTE *)&MasterIrp->Size + 5) = *(_BYTE *)(a1 + 98);
    a2->IoStatus.Information = 8LL;
  }
  return sub_1C0003440(a2, 0, v4);
}
