/*
 * XREFs of RaidAdapterCancelRemoveDeviceIrp @ 0x1C008BBA8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C0017FB8 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall RaidAdapterCancelRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 1);
  a2->IoStatus.Status = 0;
  if ( StorEtwLoggingEnabled )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C00799E2 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
