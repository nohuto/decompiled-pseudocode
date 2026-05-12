/*
 * XREFs of sub_1C0063608 @ 0x1C0063608
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C005B3C0 @ 0x1C005B3C0 (sub_1C005B3C0.c)
 */

NTSTATUS __fastcall sub_1C0063608(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
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
    v8 = sub_1C005B3C0(*(struct _DEVICE_OBJECT **)(a1 + 8), MasterIrp);
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
  return sub_1C0003440(a2, 0, v8);
}
