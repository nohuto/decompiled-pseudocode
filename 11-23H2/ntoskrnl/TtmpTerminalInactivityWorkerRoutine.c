/*
 * XREFs of TtmpTerminalInactivityWorkerRoutine @ 0x1409ABB00
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 */

__int64 TtmpTerminalInactivityWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_TERMINAL_INACTIVITY, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd(&TtmpTerminalInactivityWorkCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
