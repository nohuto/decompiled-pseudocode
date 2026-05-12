/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C0088924
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C0031C74 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     PortPassThroughSetAddress @ 0x1C0088FF4 (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  IRP *v5; // rbx
  int v7; // eax
  __int64 v8; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v11; // [rsp+20h] [rbp-48h]
  int MajorFunction; // [rsp+20h] [rbp-48h]
  int MinorFunction; // [rsp+28h] [rbp-40h]
  unsigned int LowPart; // [rsp+30h] [rbp-38h]
  GUID v15; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v15 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( (byte_1C00799E3 & 1) != 0 )
    {
      CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      MinorFunction = CurrentStackLocation->MinorFunction;
      MajorFunction = CurrentStackLocation->MajorFunction;
      McTemplateK0pddd_EtwWriteTransfer(
        CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &v15,
        v5,
        MajorFunction,
        MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a4) = *(_BYTE *)(a1 + 98);
  LOBYTE(a3) = *(_BYTE *)(a1 + 97);
  LOBYTE(a2) = *(_BYTE *)(a1 + 96);
  v7 = PortPassThroughSetAddress(v5, a2, a3, a4);
  if ( v7 < 0 )
    return RaidCompleteRequestEx(v5, 0, 0xC0000010);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 8) != 0 )
    {
      LODWORD(v11) = v7;
      McTemplateK0pd_EtwWriteTransfer(v8, &EventNonReadWriteRequestComplete, &v15, v5, v11);
    }
  }
  ++v5->CurrentLocation;
  ++v5->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 8), v5);
}
