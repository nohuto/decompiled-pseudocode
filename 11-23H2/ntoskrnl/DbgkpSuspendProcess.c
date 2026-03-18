/*
 * XREFs of DbgkpSuspendProcess @ 0x140939524
 * Callers:
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x14093A050 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14093A148 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1407EBC80 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
