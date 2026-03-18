/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C00447E8
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0007350 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C003987C (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0044610 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h]
  _DWORD v22[60]; // [rsp+78h] [rbp-90h] BYREF
  char v23; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2896) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2896) > 1u )
    {
      memset(&v22[20], 0, 0xA0uLL);
      v6 = *(unsigned __int16 *)(a1 + 4);
      v22[28] |= 0x40u;
      v22[32] = v6;
      v22[25] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 2896) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v4);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2896) )
    {
      v23 = 0;
      memset(v22, 0, 0x50uLL);
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = *(_QWORD *)(a1 + 24) + 632LL;
      if ( *(_DWORD *)(a1 + 2904) )
      {
        v9 = *(unsigned int *)(a1 + 160);
        v22[2] = *(_DWORD *)(a1 + 160);
        v22[0] = 2;
        v22[3] = a2;
        v10 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v10 += 8 * v7;
        v11 = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v22[4] = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v12 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v12 += 8 * v7;
        v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL);
        v22[5] = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL);
        WdLogSingleEntry4(4LL, a2, v9, v11, v13);
      }
      else
      {
        v22[0] = 1;
        v22[2] = a2;
        v14 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v14 += 8 * v7;
        v15 = *(unsigned __int16 *)(*(_QWORD *)v14 + 8LL);
        v22[3] = *(unsigned __int16 *)(*(_QWORD *)v14 + 8LL);
        v16 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v16 += 8 * v7;
        v22[4] = *(unsigned __int16 *)(*(_QWORD *)v16 + 6LL);
        WdLogSingleEntry3(4LL, a2, v15, v22[4]);
      }
      v17 = *(unsigned int *)(v4 + 32);
      v18 = *(_QWORD *)(v4 + 24);
      v19 = *(_QWORD *)(v4 + 8);
      LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v22;
      DpSynchronizeExecution(v18, VidSchiCallNotifyInterruptAtISR, &v19, v17, &v23);
    }
  }
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v21 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1752), (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
