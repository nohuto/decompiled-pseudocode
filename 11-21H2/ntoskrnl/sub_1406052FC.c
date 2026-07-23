/*
 * XREFs of sub_1406052FC @ 0x1406052FC
 * Callers:
 *     sub_1406055D0 @ 0x1406055D0 (sub_1406055D0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 *     sub_1406053C0 @ 0x1406053C0 (sub_1406053C0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406052FC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  qword_140C18EC8 = a2;
  qword_140C18EE0 = a5;
  qword_140C18EC0 = a1;
  qword_140C18ED0 = a3;
  qword_140C18ED8 = a4;
  v7 = *(const char **)(a1 + 1112);
  if ( v7 )
    sub_140605160("Driver Verifier: Livedump scheduled with Error Code: 0x%X Error Message: '%s'\n", a2, v7);
  if ( KeGetCurrentIrql() )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1316118851LL);
    if ( Pool2 )
    {
      Pool2->Parameter = Pool2;
      Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406053C0;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, SuperCriticalWorkQueue);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    sub_1406053C0(0LL);
  }
  return v5;
}
