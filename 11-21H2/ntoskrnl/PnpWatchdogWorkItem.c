/*
 * XREFs of PnpWatchdogWorkItem @ 0x1409502B0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x14074ED04 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
