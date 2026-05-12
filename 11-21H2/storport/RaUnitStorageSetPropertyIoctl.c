/*
 * XREFs of RaUnitStorageSetPropertyIoctl @ 0x1C008FBCC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0053B14 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageSetPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    if ( **(_DWORD **)(a2 + 24) == 50 )
    {
      return RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl(a1, (IRP *)a2);
    }
    else
    {
      if ( StorEtwLoggingEnabled )
      {
        v7 = 0LL;
        IoGetActivityIdIrp(a2, &v7);
        if ( (byte_1C00799E2 & 8) != 0 )
        {
          v6 = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v5, &EventNonReadWriteRequestComplete, &v7, a2, v6);
        }
      }
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, 0xC00000EF);
  }
}
