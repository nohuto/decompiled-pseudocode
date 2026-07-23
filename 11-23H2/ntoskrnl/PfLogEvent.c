/*
 * XREFs of PfLogEvent @ 0x14028C318
 * Callers:
 *     PfHardFaultLog @ 0x1402A3338 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1402DF7B0 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x1402DFE64 (PfLogFileDataAccess.c)
 *     PfpLogApplicationEvent @ 0x1402FA304 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1402FA650 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x1403611E0 (PfLogForegroundProcess.c)
 *     PfpLogScenarioEvent @ 0x1407D3DB8 (PfpLogScenarioEvent.c)
 *     PfpLogEventRequest @ 0x14097DFD8 (PfpLogEventRequest.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9FF44 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14028BE64 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028C110 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // edi
  unsigned __int64 *v11; // rdx
  __int64 v12; // rdx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-20h] BYREF

  ListEntry = 0LL;
  v15 = 0LL;
  v8 = (a4 + 31) & 0xFFFFFFF0;
  v10 = PfFbLogEntryReserve(&stru_140C652A0, &ListEntry, &v15, v8);
  if ( v10 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65450 + 1, 1u);
    if ( ListEntry )
      PfFbLogEntryComplete(ListEntry, v9, 0LL);
  }
  else
  {
    v11 = v15;
    *v15 = *v15 & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    *((_DWORD *)v11 + 2) = a2;
    *v11 ^= (*(_DWORD *)v11 ^ (a1 << 12)) & 0x1F000;
    memmove(v11 + 2, a3, a4);
    PfFbLogEntryComplete(ListEntry, v12, v8);
    return 0;
  }
  return (unsigned int)v10;
}
