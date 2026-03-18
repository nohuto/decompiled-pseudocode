/*
 * XREFs of PoEndPowerStateTasks @ 0x1407FE7BC
 * Callers:
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
