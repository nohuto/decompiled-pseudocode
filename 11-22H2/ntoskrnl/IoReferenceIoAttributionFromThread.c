/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402C0F00
 * Callers:
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333960 (MiCheckAndUpdateIoAttribution.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B68E4 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C0F78 (IopReferenceIoAttributionFromProcess.c)
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
