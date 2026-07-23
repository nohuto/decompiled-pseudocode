/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402C11C0
 * Callers:
 *     CcCopyReadEx @ 0x140261FF0 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333D90 (MiCheckAndUpdateIoAttribution.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B6BA4 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C1238 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, __int64 a2)
{
  _KPROCESS **WorkOnBehalfThread; // rax
  _KPROCESS **v5; // rbx
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  WorkOnBehalfThread = (_KPROCESS **)PsGetWorkOnBehalfThread(a1, &v9);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    Process = WorkOnBehalfThread[68];
  else
    Process = a1->Process;
  v7 = IopReferenceIoAttributionFromProcess(Process, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDeleteWithTag(v5, 0x746C6644u);
  return v7;
}
