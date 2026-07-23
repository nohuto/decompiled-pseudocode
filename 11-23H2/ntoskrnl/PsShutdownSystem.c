/*
 * XREFs of PsShutdownSystem @ 0x1409B3744
 * Callers:
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     ObFastReplaceObject @ 0x14029A808 (ObFastReplaceObject.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PspGetNextSilo @ 0x1406A31F4 (PspGetNextSilo.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 *     PsEnumProcesses @ 0x1407CF79C (PsEnumProcesses.c)
 *     PsTerminateServerSilo @ 0x1409ACAA0 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1409B402C (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 *NextProcess; // rbx
  int v9; // eax
  int v10; // ecx
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rbp
  ULONG_PTR v14; // rcx
  __int64 **v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // rbp
  void *v20; // r14
  void *v21; // rcx
  REGHANDLE v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v26 = 0LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = 0LL;
      NextProcess = PsGetNextProcess(0LL);
      if ( NextProcess )
      {
        do
        {
          v9 = *((_DWORD *)NextProcess + 543);
          if ( (v9 & 0x1000) == 0
            && NextProcess != PsIdleProcess
            && NextProcess != *((__int64 **)ServerSiloGlobals + 110)
            && (v9 & 0x40000000) == 0 )
          {
            v10 = PsTerminateProcess((ULONG_PTR)NextProcess);
            if ( (*((_DWORD *)NextProcess + 281) & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
            {
              ObfReferenceObject(NextProcess);
              Object[v7] = NextProcess;
              v7 = (unsigned int)(v7 + 1);
            }
          }
          NextProcess = PsGetNextProcess(NextProcess);
        }
        while ( NextProcess );
        if ( (_DWORD)v7 )
        {
          v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v12 = Object;
          v13 = (unsigned int)v7;
          do
          {
            ObfDereferenceObject(*v12++);
            --v13;
          }
          while ( v13 );
          if ( v11 == 258 )
            break;
        }
      }
      v6 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_26;
    }
    ++v6;
  }
  while ( v6 <= 0xA || PsContinueWaiting );
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = *((_QWORD *)ServerSiloGlobals + 110);
    if ( v14 )
    {
      PsTerminateProcess(v14);
      PspWaitForUsermodeExit(*((_QWORD *)ServerSiloGlobals + 110));
    }
  }
  v15 = (__int64 **)PspSystemDlls;
  v16 = 7LL;
  do
  {
    if ( *v15 )
    {
      v17 = (*v15)[4];
      if ( v17 )
        MiUnmapViewOfSection((__int64)PsInitialSystemProcess, v17, 0, 0);
      CurrentThread = KeGetCurrentThread();
      v19 = **v15;
      v20 = (void *)ObFastReplaceObject((volatile __int64 *)v19, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v23, 0);
        if ( (*(_QWORD *)(v19 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive(v19 + 8);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 15));
  *((_QWORD *)PspSystemPartition + 15) = 0LL;
  v21 = (void *)PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1];
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[1] = 1LL;
  }
  v22 = qword_140C03068;
  qword_140C03068 = 0LL;
  dword_140C03048 = 0;
  EtwUnregister(v22);
  return v0;
}
