/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C000C724
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C000C6A0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterIdleCondition @ 0x1C0014140 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterStopAdapter @ 0x1C0014FFC (RaidAdapterStopAdapter.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0015084 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 *     RaidAdapterRestartAdapter @ 0x1C001E07C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00370BC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C0048AA0 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0048EB8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C004AD50 (StorPortAdapterPowerControl.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C005A3A8 (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x1C005A4AC (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C005A53C (StorEnableAdapterOperationalEvents.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0084E48 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C008CD90 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C008D0BC (RaidGetStorageAdapterFruIdProperty.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
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
