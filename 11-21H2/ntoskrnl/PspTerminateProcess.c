/*
 * XREFs of PspTerminateProcess @ 0x1407D7E94
 * Callers:
 *     NtTerminateProcess @ 0x1407D7CA0 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x1409B2A10 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14035EC68 (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x14035ED74 (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(__int64 BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // esi
  char v8; // al
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 8u);
  if ( (v7 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v8 = a4 | 4;
    if ( (v7 & 0x40000000) == 0 )
      v8 = a4;
    v9 = v8;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1520) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 2004) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 2004) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x400) == 0 )
  {
    v10 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C1BE20 + 1) && (v9 & 8) == 0 )
  {
    v10 = (*((__int64 (__fastcall **)(__int64, _QWORD))&xmmword_140C1BE20 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_15:
  if ( (v7 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v11;
}
