/*
 * XREFs of RaidAdapterSetLedState @ 0x1C0037C10
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidSetLedStateByAcpiDsm @ 0x1C004F4C8 (RaidSetLedStateByAcpiDsm.c)
 *     RaidSetLedStateByNpem @ 0x1C004F5C4 (RaidSetLedStateByNpem.c)
 */

__int64 __fastcall RaidAdapterSetLedState(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rbx
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
      v7 = RaidSetLedStateByAcpiDsm(*(_QWORD *)(a1 + 8), MasterIrp);
      if ( v7 == -1073741637 )
        v7 = RaidSetLedStateByNpem(*(_QWORD *)(a1 + 8), MasterIrp, 3221225659LL);
      if ( v7 >= 0 )
      {
        MdlAddress = (int)MasterIrp->MdlAddress;
        if ( BYTE4(MasterIrp->MdlAddress) )
          *(_DWORD *)(a1 + 5624) |= MdlAddress;
        else
          *(_DWORD *)(a1 + 5624) &= ~MdlAddress;
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
  return RaidCompleteRequestEx(a2, 0, v7);
}
