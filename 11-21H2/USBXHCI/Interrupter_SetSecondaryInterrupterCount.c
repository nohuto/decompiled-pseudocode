/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C0001904
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006F3C0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00778E0 (Interrupter_DetermineSecondaryInterrupterCount.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
