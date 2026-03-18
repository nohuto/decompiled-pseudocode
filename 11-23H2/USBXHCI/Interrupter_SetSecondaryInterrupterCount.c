/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C0008228
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006EAF0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C28 (Interrupter_PrepareHardware.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0079CDC (Interrupter_DetermineSecondaryInterrupterCount.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
