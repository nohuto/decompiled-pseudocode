/*
 * XREFs of PfProcessExitNotification @ 0x140760DB4
 * Callers:
 *     PspExitProcess @ 0x140751434 (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     RtlRbRemoveNode @ 0x14024B930 (RtlRbRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     PfpLogApplicationEvent @ 0x1402FA074 (PfpLogApplicationEvent.c)
 *     PfSnEndProcessTrace @ 0x1407E5320 (PfSnEndProcessTrace.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097F66C (PfSnAltProfileTreeCompareByProcess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rdi
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rax
  void *v7; // rcx

  PfpLogApplicationEvent(a1, 0LL, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6A738, 0LL);
  v3 = (unsigned __int64)qword_140C6A718;
  if ( (xmmword_140C6A720 & 1) != 0 && qword_140C6A718 )
    v3 = (unsigned __int64)&qword_140C6A718 ^ (unsigned __int64)qword_140C6A718;
  v4 = xmmword_140C6A720 & 1;
  while ( v3 )
  {
    v5 = PfSnAltProfileTreeCompareByProcess(a1, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  if ( v3 )
  {
    RtlRbRemoveNode((unsigned __int64 *)&qword_140C6A718, v3);
    RtlRbRemoveNode((unsigned __int64 *)&xmmword_140C6A720 + 1, v3 + 24);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6A738, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6A738);
  KeAbPostRelease((ULONG_PTR)&qword_140C6A738);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v7 = *(void **)(v3 + 48);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x73576650u);
    ExFreePoolWithTag((PVOID)v3, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2LL);
}
