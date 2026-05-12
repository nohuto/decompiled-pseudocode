/*
 * XREFs of RaidUnitSetLedState @ 0x1C0062DFC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidSetLedStateByAcpiDsm @ 0x1C005AD50 (RaidSetLedStateByAcpiDsm.c)
 */

NTSTATUS __fastcall RaidUnitSetLedState(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 MasterIrp; // rdi
  unsigned int v6; // eax
  signed int v8; // r8d
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  char v12; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
    && *(_DWORD *)MasterIrp == 16
    && *(_DWORD *)(MasterIrp + 4) >= 0x10u
    && (v6 = *(_DWORD *)(MasterIrp + 8), (v6 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v6) == 1 )
  {
    if ( *(_DWORD *)(a1 + 3344) == 17 )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v8 = RaidSetLedStateByAcpiDsm(*(struct _DEVICE_OBJECT **)(a1 + 8), MasterIrp);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(MasterIrp + 12) )
        v10 = *(_DWORD *)(MasterIrp + 8) | *(_DWORD *)(v9 + 5688);
      else
        v10 = *(_DWORD *)(v9 + 5688) & ~*(_DWORD *)(MasterIrp + 8);
      *(_DWORD *)(v9 + 5688) = v10;
      v11 = *(_QWORD *)(a1 + 24);
      v12 = *(_BYTE *)(v11 + 109);
      if ( v12 >= 0 )
        *(_BYTE *)(v11 + 109) = v12 | 0x80;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
