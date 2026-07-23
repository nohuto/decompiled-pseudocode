/*
 * XREFs of KeWaitForAlertByThreadId @ 0x1402C1A34
 * Callers:
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x140742B00 (NtWaitForAlertByThreadId.c)
 *     RtlpRunOnceWaitForInit @ 0x1408860A8 (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402BBEA0 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402C1BA0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1402C1D20 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1402C29B0 (KiCheckWaitNext.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentIrql; // rdx
  char v7; // bp
  __int64 result; // rax
  __int64 v9; // r8
  ULONG_PTR v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int v13; // ebx
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v17 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v16, (__int64)&v17);
    while ( 1 )
    {
      LOBYTE(CurrentIrql) = a1;
      result = KiBeginThreadWait(CurrentThread, CurrentIrql, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v17, v16) )
      {
        v13 = 258;
        goto LABEL_18;
      }
      v12 = v17;
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = (__int64)KiCommitThreadWait(v10, (__int64 *)&CurrentThread->320, v12, v11, 0LL);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v15) = 4;
        else
          v15 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v15;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v13 = 257;
LABEL_18:
    CurrentThread->WaitReason = 0;
    LOBYTE(v9) = v7;
    KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v9);
    return v13;
  }
  return 258LL;
}
