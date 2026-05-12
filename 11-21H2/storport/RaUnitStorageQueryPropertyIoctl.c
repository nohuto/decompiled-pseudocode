/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0014D6C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C00228C4 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005339C (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C00538B0 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0084950 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0089AB8 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0089D80 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0089E68 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  int v5; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v13; // [rsp+30h] [rbp-28h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 8 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, 0xC00000EF);
  }
  v5 = *(_DWORD *)&MasterIrp->Type;
  if ( *(int *)&MasterIrp->Type > 54 )
  {
    v7 = v5 - 59;
    if ( !v7 )
      return RaUnitStorageQueryDeviceNumaPropertyIoctl(a1, a2);
    v8 = v7 - 3;
    if ( !v8 )
      return RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, a2);
    v9 = v8 - 1;
    if ( !v9 )
      return RaUnitStorageQueryDeviceLedStatePropertyIoctl(a1, a2);
    v10 = v9 - 1;
    if ( !v10 )
      return RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl((__int64)MasterIrp, a2);
    if ( v10 == 1 )
      return RaUnitStorageQueryDeviceFruIdPropertyIoctl(a1, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 54:
        return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, a2);
      case 0:
        return RaUnitStorageQueryDevicePropertyIoctl(a1, a2);
      case 2:
        return RaUnitStorageQueryDeviceIdPropertyIoctl(a1, a2);
      case 12:
        return RaUnitStorageQueryDevicePowerPropertyIoctl(a1, a2);
      case 48:
        return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1, a2);
      case 50:
        return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, a2);
      case 52:
        return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, a2);
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    v13 = 0LL;
    IoGetActivityIdIrp(a2, &v13);
    if ( (byte_1C00799E2 & 8) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v11, &EventNonReadWriteRequestComplete, &v13, a2, Status);
    }
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
}
