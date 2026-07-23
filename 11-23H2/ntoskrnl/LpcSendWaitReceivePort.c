/*
 * XREFs of LpcSendWaitReceivePort @ 0x1407E6210
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x14093A348 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x1409459E4 (IopSendMessageToTrackService.c)
 *     ExpRaiseHardError @ 0x140A01148 (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0LL, a4, a5, 0LL, a6, 0);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}
