/*
 * XREFs of sub_1C005E574 @ 0x1C005E574
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 */

__int64 __fastcall sub_1C005E574(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // r8
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    MasterIrp->MdlAddress = 0LL;
    *(_QWORD *)&MasterIrp->Flags = 0LL;
    MasterIrp->AssociatedIrp.MasterIrp = 0LL;
    LODWORD(MasterIrp->ThreadListEntry.Flink) = 0;
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 3280);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 3292);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 3284);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 3296);
    v6 = -1;
    v7 = *(_DWORD *)(a1 + 3288);
    if ( v7 == -1 )
      v8 = -1;
    else
      v8 = 500 * v7;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v8;
    v9 = *(_DWORD *)(a1 + 3304);
    if ( v9 != -1 )
      v6 = 500 * v9;
    MasterIrp->Flags = v6;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 3300);
    v5 = 0;
    v4 = 36LL;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x26u, (__int64)&unk_1C0083530, a1);
    }
    v4 = 0LL;
    v5 = -1073741789;
  }
  a2->IoStatus.Information = v4;
  return sub_1C0003440(a2, 0, v5);
}
