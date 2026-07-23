/*
 * XREFs of KiFastExitThreadWait @ 0x1402BBEA0
 * Callers:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x1402C1A34 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14034B09C (KiWaitForAllObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(_QWORD *)(a2 + 64) );
    }
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
