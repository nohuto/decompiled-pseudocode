/*
 * XREFs of PspTerminateProcess @ 0x1406839D4
 * Callers:
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x1406837E0 (NtTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x1409B5DC0 (PspTerminatePicoProcess.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1402047EC (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x140204AE0 (KeForceResumeProcess.c)
 *     EtwTraceProcessTerminate @ 0x140204F94 (EtwTraceProcessTerminate.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v8; // esi
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
  v8 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 8u);
  if ( (v8 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v9 = a4 | 4;
    if ( (v8 & 0x40000000) == 0 )
      v9 = a4;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1520) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 2004) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 2004) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
    KeAbPostRelease(BugCheckParameter1 + 1080);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x400) == 0 )
  {
    v10 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C38100 + 1) && (v9 & 8) == 0 )
  {
    v10 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_140C38100 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  PspRundownSingleProcess(BugCheckParameter1);
LABEL_15:
  if ( (v8 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v11;
}
