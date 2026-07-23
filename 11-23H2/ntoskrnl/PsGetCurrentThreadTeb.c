/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140211880
 * Callers:
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1409E67AC (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
