/*
 * XREFs of PfLogEvent @ 0x14028BF68
 * Callers:
 *     PfHardFaultLog @ 0x1402A2F88 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1402DF520 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x1402DFBD4 (PfLogFileDataAccess.c)
 *     PfpLogApplicationEvent @ 0x1402FA074 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1402FA3C0 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x1403609F0 (PfLogForegroundProcess.c)
 *     PfpLogScenarioEvent @ 0x1407D4068 (PfpLogScenarioEvent.c)
 *     PfpLogEventRequest @ 0x14097DE88 (PfpLogEventRequest.c)
 *     PfPowerActionNotify @ 0x140A9FF34 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140AA0194 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14028BAB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028BD60 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140435100 (memmove.c)
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
  v10 = PfFbLogEntryReserve(&stru_140C653A0, &ListEntry, &v15, v8);
  if ( v10 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65550 + 1, 1u);
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
