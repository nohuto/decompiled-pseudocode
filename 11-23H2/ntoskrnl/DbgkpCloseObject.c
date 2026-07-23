/*
 * XREFs of DbgkpCloseObject @ 0x140937310
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     DbgkpMarkProcessPeb @ 0x14093760C (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140938638 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  __int64 *NextProcess; // rdi
  char v8; // bl
  _DWORD *v9; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 80) = a2 + 80;
    *(_QWORD *)(a2 + 88) = a2 + 80;
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_DWORD *)(a2 + 96) & 2;
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      v8 = v6 != 0 ? 2 : 0;
      do
      {
        if ( NextProcess[175] == a2 )
        {
          v8 &= ~1u;
          ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
          if ( NextProcess[175] == a2 )
          {
            NextProcess[175] = 0LL;
            v8 |= 1u;
          }
          ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
          if ( (v8 & 1) != 0 )
          {
            DbgkpMarkProcessPeb((ULONG_PTR)NextProcess);
            if ( (v8 & 2) != 0 )
              PsTerminateProcess((ULONG_PTR)NextProcess);
            ObfDereferenceObject((PVOID)a2);
          }
        }
        NextProcess = PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      v9[18] = -1073740972;
      DbgkpWakeTarget(v9);
    }
  }
}
