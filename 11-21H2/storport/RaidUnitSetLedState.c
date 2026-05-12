/*
 * XREFs of RaidUnitSetLedState @ 0x1C0056038
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidSetLedStateByAcpiDsm @ 0x1C004F4C8 (RaidSetLedStateByAcpiDsm.c)
 */

NTSTATUS __fastcall RaidUnitSetLedState(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 MasterIrp; // rbx
  unsigned int v6; // eax
  signed int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
    && *(_DWORD *)MasterIrp == 16
    && *(_DWORD *)(MasterIrp + 4) >= 0x10u
    && (v6 = *(_DWORD *)(MasterIrp + 8), (v6 & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(v6) == 1 )
  {
    if ( *(_DWORD *)(a1 + 3296) == 17 )
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
        *(_DWORD *)(v9 + 5624) |= *(_DWORD *)(MasterIrp + 8);
      else
        *(_DWORD *)(v9 + 5624) &= ~*(_DWORD *)(MasterIrp + 8);
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_BYTE *)(v10 + 109);
      if ( v11 >= 0 )
        *(_BYTE *)(v10 + 109) = v11 | 0x80;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
