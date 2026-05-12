/*
 * XREFs of sub_1C0039604 @ 0x1C0039604
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C005B3C0 @ 0x1C005B3C0 (sub_1C005B3C0.c)
 *     sub_1C005B4C0 @ 0x1C005B4C0 (sub_1C005B4C0.c)
 */

__int64 __fastcall sub_1C0039604(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rbx
  unsigned int v6; // eax
  signed int v7; // r8d
  int MdlAddress; // eax
  char v9; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
    && MasterIrp
    && *(_DWORD *)&MasterIrp->Type == 16
    && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u
    && (v6 = (unsigned int)MasterIrp->MdlAddress, (v6 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v6) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v7 = sub_1C005B3C0(*(_QWORD *)(a1 + 8), MasterIrp);
      if ( v7 == -1073741637 )
        v7 = sub_1C005B4C0(*(_QWORD *)(a1 + 8), MasterIrp, 3221225659LL);
      if ( v7 >= 0 )
      {
        MdlAddress = (int)MasterIrp->MdlAddress;
        if ( BYTE4(MasterIrp->MdlAddress) )
          *(_DWORD *)(a1 + 5688) |= MdlAddress;
        else
          *(_DWORD *)(a1 + 5688) &= ~MdlAddress;
        v9 = *(_BYTE *)(a1 + 109);
        if ( v9 >= 0 )
          *(_BYTE *)(a1 + 109) = v9 | 0x80;
      }
    }
    else
    {
      v7 = -1073741496;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  return sub_1C0003440(a2, 0, v7);
}
