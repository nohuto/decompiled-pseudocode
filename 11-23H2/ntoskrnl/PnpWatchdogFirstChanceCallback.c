/*
 * XREFs of PnpWatchdogFirstChanceCallback @ 0x140957CE0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x140561130 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x1407857BC (PnpRecordBlackbox.c)
 */

char __fastcall PnpWatchdogFirstChanceCallback(__int64 a1)
{
  char result; // al

  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  result = PnpWatchdogEtwWrite(a1, 0);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
