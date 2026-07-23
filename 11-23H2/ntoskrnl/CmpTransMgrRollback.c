/*
 * XREFs of CmpTransMgrRollback @ 0x1407D0C08
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x1407D0B68 (CmpAbortLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1407E89F8 (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v6; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a1 + 16, &v10, 0LL);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v8 = *(_DWORD *)(NextElement + 64);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *(_DWORD *)(NextElement + 68);
      if ( v9 )
      {
        if ( v9 == 12 && !*(_DWORD *)(v6 + 96) )
          *(_DWORD *)(v6 + 96) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      else if ( !*(_DWORD *)(v6 + 88) )
      {
        *(_DWORD *)(v6 + 88) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      *(_DWORD *)(v6 + 64) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
