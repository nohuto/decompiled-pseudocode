/*
 * XREFs of McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248
 * Callers:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterQueryIdIrp @ 0x1C0036F5C (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0036FF0 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00A00DC (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC (RaUnitScsiPassThroughIoctl.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00A52A0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C00A6C04 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00A6CA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00A9810 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C00AA010 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x1C00AA12C (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C00AA518 (RaUnitStorageSetPropertyIoctl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pd_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 3u, &v4);
}
