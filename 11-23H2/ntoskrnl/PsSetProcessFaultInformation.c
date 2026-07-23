/*
 * XREFs of PsSetProcessFaultInformation @ 0x140683030
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x140939764 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14036556C (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PsSetProcessTelemetryAppState @ 0x1407518DC (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409AF9E4 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, _DWORD *a2)
{
  volatile signed __int64 *v4; // rdi
  struct _KTHREAD *v5; // rbp
  void (__fastcall **ExtensionTable)(ULONG_PTR, struct _KTHREAD *, _DWORD *); // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v11; // rbp
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v8 = *(_DWORD *)(a1 + 2172);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v8 | 4, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0929C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C09298 )
          dword_140C09298 = TelemetryCoverageStringHashInternal(off_140C09290, &v12);
        EtwTelemetryCoverageReport((__int64 *)&off_140C09290);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState(a1);
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C092B4 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C092B0 )
        dword_140C092B0 = TelemetryCoverageStringHashInternal(off_140C092A8, &v13);
      EtwTelemetryCoverageReport((__int64 *)&off_140C092A8);
    }
    CurrentThread = KeGetCurrentThread();
    v4 = (volatile signed __int64 *)(a1 + 1080);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 7) != 7 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    v4 = (volatile signed __int64 *)(a1 + 1080);
  }
  if ( (*a2 & 4) != 0 )
  {
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegionThread((__int64)v5);
  }
  if ( (*a2 & 8) != 0 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    *(_BYTE *)(a1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegionThread((__int64)v11);
  }
  ExtensionTable = (void (__fastcall **)(ULONG_PTR, struct _KTHREAD *, _DWORD *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(a1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
