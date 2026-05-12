/*
 * XREFs of sub_1C0038644 @ 0x1C0038644
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C0038644(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // r8
  unsigned int v3; // r8d
  char v4; // al

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 8 )
  {
    *(_DWORD *)&MasterIrp->Type = 8;
    v4 = *(_BYTE *)(a1 + 56);
    *(USHORT *)((char *)&MasterIrp->Size + 3) = -1;
    *((_BYTE *)&MasterIrp->Size + 2) = v4;
    *((_BYTE *)&MasterIrp->Size + 5) = -1;
    v3 = 0;
    a2->IoStatus.Information = 8LL;
  }
  else
  {
    v3 = -1073741789;
  }
  return sub_1C0003440(a2, 0, v3);
}
