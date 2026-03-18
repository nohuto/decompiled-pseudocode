/*
 * XREFs of UnpackAffectedThreadList @ 0x1C01108A4
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009959C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00A9BFC (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 UnpackAffectedThreadList()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rcx
  __int64 result; // rax

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v1 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v1);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C0326238[0] = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}
