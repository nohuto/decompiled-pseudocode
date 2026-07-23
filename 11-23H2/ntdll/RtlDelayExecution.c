/*
 * XREFs of RtlDelayExecution @ 0x1800556D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180010930 (RtlQueryPerformanceCounter.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 */

NTSTATUS __cdecl RtlDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  struct _TEB *v2; // rsi
  NTSTATUS v5; // ebx
  NTSTATUS result; // eax
  unsigned int SpinCallCount; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  if ( !DelayInterval->QuadPart && (dword_180186028 || dword_18018602C) )
  {
    ++v2->SpinCallCount;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( PerformanceCounter.QuadPart - v2->LastSleepCounter < (unsigned int)SmtDelayedConfiguration )
    {
      SpinCallCount = v2->SpinCallCount;
      if ( SpinCallCount >= dword_180186024 )
      {
        if ( dword_18018602C )
          v8 = dword_18018602C * (SpinCallCount - dword_180186024);
        else
          v8 = 0;
        v9 = dword_180186028 + v8;
        if ( v9 > dword_180186030 )
          v9 = dword_180186030;
        v10 = 10 * v9 / MEMORY[0x7FFE02D6];
        if ( (_DWORD)v10 )
        {
          do
          {
            _mm_pause();
            --v10;
          }
          while ( v10 );
        }
      }
    }
    v5 = ZwDelayExecution(Alertable, DelayInterval);
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v2->LastSleepCounter = PerformanceCounter.QuadPart;
  }
  else
  {
    v5 = ZwDelayExecution(Alertable, DelayInterval);
  }
  result = v5;
  if ( v5 != 1073741860 )
    v2->SpinCallCount = 0;
  return result;
}
