/*
 * XREFs of RaUnitStorageInternalSetPropertyIoctl @ 0x1C008F7EC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall RaUnitStorageInternalSetPropertyIoctl(__int64 a1, IRP *a2)
{
  __int64 v5; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( StorEtwLoggingEnabled )
    {
      v7 = 0LL;
      IoGetActivityIdIrp(a2, &v7);
      if ( (byte_1C00799E2 & 8) != 0 )
      {
        Status = a2->IoStatus.Status;
        McTemplateK0pd_EtwWriteTransfer(v5, &EventNonReadWriteRequestComplete, &v7, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, 0xC00000EF);
  }
}
