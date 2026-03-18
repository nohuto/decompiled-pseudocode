/*
 * XREFs of ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C014297C
 * Callers:
 *     MarkQueuesForKeyStateUpdate @ 0x1C01E8070 (MarkQueuesForKeyStateUpdate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x1C01E7720 (-MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z.c)
 */

void __fastcall CActivationObjectManager::ForEachActivatableQueue(
        CActivationObjectManager *this,
        void (*a2)(struct tagQ *, void *),
        struct tagQ *a3)
{
  CActivationObjectManager *v3; // rbp
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rcx
  __int64 ThreadWin32Thread; // rax
  void *v9; // r8
  KeyboardProcessing *v10; // rcx

  v3 = qword_1C0296548;
  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  v5 = (unsigned __int64 *)*((_QWORD *)v3 + 1);
  v6 = (unsigned __int64)v5;
  while ( 1 )
  {
    v7 = (unsigned __int64 *)v6;
    if ( !v6 )
      break;
    v6 = *(_QWORD *)v6;
    if ( (v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v7;
    if ( (v6 & 1) != 0 )
      break;
LABEL_11:
    if ( !v6 )
      goto LABEL_10;
    ThreadWin32Thread = W32GetThreadWin32Thread(*(_QWORD *)(v6 + 24));
    if ( ThreadWin32Thread )
    {
      v10 = *(KeyboardProcessing **)(ThreadWin32Thread + 432);
      if ( v10 )
        KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(v10, a3, v9);
    }
  }
  for ( ++v5; (unsigned __int64)v5 < *((_QWORD *)v3 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v3 + 1) >> 5); ++v5 )
  {
    v6 = *v5;
    if ( (*v5 & 1) == 0 )
      goto LABEL_11;
  }
LABEL_10:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)v3 + 16));
}
