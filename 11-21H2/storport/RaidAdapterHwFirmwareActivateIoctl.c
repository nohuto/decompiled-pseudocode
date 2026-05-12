/*
 * XREFs of RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034EB4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x1C00330A4 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C004D018 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     StorLogIoError @ 0x1C004FE34 (StorLogIoError.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareActivateIoctl(__int64 a1, IRP *a2)
{
  PVOID v2; // rbp
  signed int v5; // edi
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( *(_QWORD *)(a1 + 568) && *(_QWORD *)(a1 + 576) )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x10 )
    {
      v5 = -1073741820;
LABEL_5:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v5);
    }
    RaBuildHwFirmwareActivateBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v7);
    v2 = P;
    if ( !P )
    {
      v5 = -1073741801;
      goto LABEL_5;
    }
    v5 = RaidAdapterSendSrbIoControlSynchronously(
           a1,
           a2,
           (__int64)P,
           v7,
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
           1,
           128);
  }
  else
  {
    v5 = -1073741823;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
  if ( v5 < 0 )
    goto LABEL_5;
  StorLogIoError(a1, 0LL, 1074004128LL, 5LL);
  if ( (*(_BYTE *)(a1 + 110) & 2) == 0 || !RaAdapterUpdateAssociatedUnitsIdentity(a1, (struct _IO_WORKITEM *)a2) )
    goto LABEL_5;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return 259LL;
}
