/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x1409ABBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4CA4 (TtmiScheduleSessionWorker.c)
 */

LONG_PTR __fastcall TtmpScheduledEvaluationWorker(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  int v5; // eax

  result = (unsigned int)_InterlockedExchange(Object + 62, 0);
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    v4 = *((_QWORD *)Object + 2);
    if ( v4 )
    {
      v5 = *((_DWORD *)Object + 9);
      if ( (v5 & 1) == 0 && (v5 & 2) == 0 )
      {
        *((_DWORD *)Object + 9) = v5 | 4;
        TtmiScheduleSessionWorker(v4, 2);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
