/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0009450
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C00109FC (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_EnableResetHub @ 0x1C0010FD0 (HUBMUX_EnableResetHub.c)
 *     FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x1C00407DC (FWUPDATE_ReenumerateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnStart(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_EnableResetHub(v1);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2352), 0xFFFFFFEF);
  HUBMUX_QueuePowerUpEventToPSMs(v1, 3026LL);
  FWUPDATE_ReenumerateFirmwareUpdateDevice(v1);
  return 1000LL;
}
