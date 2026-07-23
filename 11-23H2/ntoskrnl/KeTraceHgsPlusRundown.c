/*
 * XREFs of KeTraceHgsPlusRundown @ 0x1405771B8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x1408203C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceWorkloadClassUpdate @ 0x1405FDCE4 (EtwTraceWorkloadClassUpdate.c)
 *     PsGetNextProcessThread @ 0x140742CA0 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 */

void __fastcall KeTraceHgsPlusRundown(char a1)
{
  void *i; // rcx
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 NextProcess; // rbx

  if ( KiHgsPlusEnabled && a1 && (WORD2(xmmword_140D1EAD0) & 0x100) != 0 )
  {
    for ( i = 0LL; ; i = (void *)NextProcess )
    {
      NextProcess = PsGetNextProcess(i);
      if ( !NextProcess )
        break;
      for ( j = 0LL; ; j = v5 )
      {
        NextProcessThread = PsGetNextProcessThread(NextProcess, j);
        v5 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        LOBYTE(v4) = *(_BYTE *)(NextProcessThread + 516);
        EtwTraceWorkloadClassUpdate(NextProcessThread, v4, 1LL);
      }
    }
  }
}
