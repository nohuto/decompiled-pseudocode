/*
 * XREFs of ExStopRecordingIRTimerExpiries @ 0x1409FB65C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x140590F94 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void ExStopRecordingIRTimerExpiries()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  __int64 *v2; // rdi
  __int64 v3; // r14
  __int16 i; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, 0LL);
  if ( v0 )
  {
    v1 = 0;
    v2 = qword_140002720;
    v3 = 17LL;
    do
    {
      for ( i = 0; (unsigned __int16)i < *(unsigned __int8 *)v2; ++i )
      {
        v5 = v0[v1];
        if ( v5 )
          PoDiagTraceIRTimerSleepStudyRundown(v5, i, (const WCHAR *)*(v2 - 2));
        ++v1;
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
