/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C00196B0
 * Callers:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0010FC0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterStopAdapter @ 0x1C00111C8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001142C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0015C98 (RaidAdapterRescanBus.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F708 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterDeviceReset @ 0x1C003525C (RaidAdapterDeviceReset.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00384E4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     RaidPowerSettingCallback @ 0x1C003D090 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C004BA60 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C004BD3C (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C004BDC0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C004BF18 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C004E280 (StorPortAdapterPowerControl.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C006734C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x1C0067450 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C00674E0 (StorEnableAdapterOperationalEvents.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C009FD44 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C00A7608 (RaidGetStorageAdapterFruIdProperty.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax

  v1 = 0;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v2 )
    return 3221225659LL;
  v3 = v2(*(_QWORD *)(a1 + 240) + 16LL);
  if ( v3 )
  {
    v1 = -1073741823;
    if ( v3 == 2 )
      return (unsigned int)-2147483631;
  }
  return v1;
}
