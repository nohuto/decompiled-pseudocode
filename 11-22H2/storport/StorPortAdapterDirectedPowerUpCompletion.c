/*
 * XREFs of StorPortAdapterDirectedPowerUpCompletion @ 0x1C004DE30
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaFlushDFxQueue @ 0x1C003FA08 (RaFlushDFxQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1C004B8F8 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 612);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp((__int64)Context);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v9 = 1;
    v8 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v6, &EventAdapterDirectedPowerUpStop, v7, **((_QWORD **)Context + 612), v8, v9);
  }
  if ( *((char **)Context + 707) == Context + 5656 )
    Context[109] &= ~0x40u;
  else
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
