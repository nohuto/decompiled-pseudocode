/*
 * XREFs of NdisCancelTimer @ 0x1C0023A00
 * Callers:
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010BDB8 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
