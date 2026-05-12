/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C001E4E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1C004892C (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v4; // rdx
  _QWORD *v6; // r8
  int v7; // ecx
  int v8; // r8d

  v4 = Context[604];
  *((_BYTE *)Context + 107) &= ~2u;
  v6 = (_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp(Context, v4, v6);
    v6 = (_QWORD *)Context[604];
  }
  PoFxReportDevicePoweredOn(*v6);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v7,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v8,
        *(_QWORD *)Context[604],
        *((_DWORD *)Context + 14),
        1);
  }
}
