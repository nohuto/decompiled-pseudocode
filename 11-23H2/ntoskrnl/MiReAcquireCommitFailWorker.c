/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140619420
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x140204AE0 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
