/*
 * XREFs of EtwpQueryReferenceTime @ 0x1409E4E94
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 == 0xFFFF )
    a2 = *(unsigned __int8 *)(a1 + 4232);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *(_OWORD *)(v5 + 304);
    EtwpReleaseLoggerContext((unsigned int *)v5, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
