/*
 * XREFs of ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C02E6394
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C02EA650 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGDEVICE::MarkDeviceAsError(_QWORD *a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1[2] + 624LL) + 8LL) + 208LL))(
    a1[96],
    a2,
    0LL);
  DXGDEVICE::FlushScheduler(a1, 3u, 0xFFFFFFFD, 0);
}
