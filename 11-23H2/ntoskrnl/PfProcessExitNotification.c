/*
 * XREFs of PfProcessExitNotification @ 0x140760FA4
 * Callers:
 *     PspExitProcess @ 0x140751624 (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PfpLogApplicationEvent @ 0x1402FA304 (PfpLogApplicationEvent.c)
 *     PfSnEndProcessTrace @ 0x1407E55F0 (PfSnEndProcessTrace.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14097F86C (PfSnAltProfileTreeCompareByProcess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Root; // rdi
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rax
  _RTL_BALANCED_NODE *v7; // rcx

  PfpLogApplicationEvent(a1, 0LL, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6A738, 0LL);
  Root = (unsigned __int64)Parent.Root;
  if ( (*(_BYTE *)&Parent.0 & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v4 = *(_BYTE *)&Parent.0 & 1;
  while ( Root )
  {
    v5 = PfSnAltProfileTreeCompareByProcess(a1, Root);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v6 = *(_QWORD *)Root;
    }
    if ( v4 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( Root )
  {
    RtlRbRemoveNode(&Parent, (PRTL_BALANCED_NODE)Root);
    RtlRbRemoveNode(&Tree, (PRTL_BALANCED_NODE)(Root + 24));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6A738, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6A738);
  KeAbPostRelease((ULONG_PTR)&qword_140C6A738);
  KeLeaveCriticalRegion();
  if ( Root )
  {
    v7 = *(_RTL_BALANCED_NODE **)(Root + 48);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x73576650u);
    ExFreePoolWithTag((PVOID)Root, 0x66506343u);
  }
  if ( PfSnNumActiveTraces )
    PfSnEndProcessTrace(a1, 2LL);
}
