/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C00148B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1C004B8F8 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  __int64 v4; // rdx
  int v6; // ecx
  int v7; // r8d

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 612);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp(Context, v4, PowerState);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v6,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v7,
        **((_QWORD **)Context + 612),
        *((_DWORD *)Context + 14),
        1);
  }
}
