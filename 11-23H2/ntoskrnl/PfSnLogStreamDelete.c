/*
 * XREFs of PfSnLogStreamDelete @ 0x1407C3554
 * Callers:
 *     PfSnNameRemoveAll @ 0x1407C3504 (PfSnNameRemoveAll.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x140314C6C (PfSnTraceGetLogEntry.c)
 *     PfSnGetNLLogEntry @ 0x140773C6C (PfSnGetNLLogEntry.c)
 *     PfSnFailProcessTrace @ 0x14097FA04 (PfSnFailProcessTrace.c)
 */

__int64 __fastcall PfSnLogStreamDelete(__int64 a1, __int64 a2)
{
  int LogEntry; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _DWORD *NLLogEntry; // rax
  _OWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  LogEntry = PfSnTraceGetLogEntry(a2, 4u, &v9);
  if ( LogEntry < 0 )
  {
    PfSnFailProcessTrace(a2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v9;
    *v9 = 0LL;
    *v6 = 29LL;
    v6[1] = v5;
    NLLogEntry = PfSnGetNLLogEntry((__int64)v6, 3, 0x28u, *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44));
    NLLogEntry[4] &= 0xFFFFFFFC;
    LogEntry = 0;
    *((_QWORD *)NLLogEntry + 3) = *(_QWORD *)(a1 + 16);
  }
  return (unsigned int)LogEntry;
}
