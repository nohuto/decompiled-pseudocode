/*
 * XREFs of KeDetachProcess @ 0x14036A4B0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  _DWORD *v0; // r8
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0, v0, v1);
}
