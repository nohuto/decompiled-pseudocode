/*
 * XREFs of RaUnitStorageInternalQueryPropertyIoctl @ 0x1C008F6D0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorUnitQueryBypassIOProperty @ 0x1C00568BC (StorUnitQueryBypassIOProperty.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x1C0090710 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x1C0090794 (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitQueryNamespaceIdProperty @ 0x1C0090818 (StorUnitQueryNamespaceIdProperty.c)
 */

NTSTATUS __fastcall RaUnitStorageInternalQueryPropertyIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  GUID v11; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v6 = **(_DWORD **)(a2 + 24);
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 3 )
          {
            return StorUnitQueryBypassIOProperty(a1, (IRP *)a2, a3);
          }
          else
          {
            if ( StorEtwLoggingEnabled )
            {
              v11 = 0LL;
              IoGetActivityIdIrp(a2, &v11);
              if ( (byte_1C00799E2 & 8) != 0 )
              {
                v10 = *(_DWORD *)(a2 + 48);
                McTemplateK0pd_EtwWriteTransfer(v9, &EventNonReadWriteRequestComplete, &v11, a2, v10);
              }
            }
            ++*(_BYTE *)(a2 + 67);
            *(_QWORD *)(a2 + 184) += 72LL;
            return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
          }
        }
        else
        {
          return StorUnitQueryDeviceIdentifyIoCommandSetProperty(a1);
        }
      }
      else
      {
        return StorUnitQueryDeviceIdentifyNamespaceProperty(a1);
      }
    }
    else
    {
      return StorUnitQueryNamespaceIdProperty(a1);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, 0xC00000EF);
  }
}
