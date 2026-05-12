/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C000F62C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C001DAB0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C0021AE0 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0021E18 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005FD60 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C005FEC8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C0060030 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0060198 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C009F938 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C00A265C (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00A370C (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C00A37F4 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  GUID v12; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 8u )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, 0xC00000EF);
  }
  v4 = **(_DWORD **)(a2 + 24);
  if ( v4 > 54 )
  {
    v6 = v4 - 59;
    if ( !v6 )
      return RaUnitStorageQueryDeviceNumaPropertyIoctl(a1, (IRP *)a2);
    v7 = v6 - 3;
    if ( !v7 )
      return RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, (IRP *)a2);
    v8 = v7 - 1;
    if ( !v8 )
      return RaUnitStorageQueryDeviceLedStatePropertyIoctl(a1, (IRP *)a2);
    v9 = v8 - 1;
    if ( !v9 )
      return RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(a1, (IRP *)a2);
    if ( v9 == 1 )
      return RaUnitStorageQueryDeviceFruIdPropertyIoctl(a1, (IRP *)a2);
  }
  else
  {
    switch ( v4 )
    {
      case 54:
        return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, (IRP *)a2);
      case 0:
        return RaUnitStorageQueryDevicePropertyIoctl(a1, a2);
      case 2:
        return RaUnitStorageQueryDeviceIdPropertyIoctl(a1, a2);
      case 12:
        return RaUnitStorageQueryDevicePowerPropertyIoctl(a1, a2);
      case 48:
        return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1, a2);
      case 50:
        return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, (IRP *)a2);
      case 52:
        return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, (IRP *)a2);
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    v12 = 0LL;
    IoGetActivityIdIrp(a2, &v12);
    if ( (byte_1C0092A02 & 8) != 0 )
    {
      v11 = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v10, &EventNonReadWriteRequestComplete, &v12, a2, v11);
    }
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
}
