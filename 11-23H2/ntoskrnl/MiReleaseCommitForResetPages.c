/*
 * XREFs of MiReleaseCommitForResetPages @ 0x140619638
 * Callers:
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061871C (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406189CC (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x140619B98 (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(__int64 a1)
{
  _QWORD *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rcx
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  volatile LONG *v12; // rbx
  KIRQL v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KEVENT *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx

  KeForceAttachProcess((_KPROCESS *)a1, 0LL, 0);
  SharedVm = MiGetSharedVm(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v4 = SharedVm;
  v5 = SharedVm[4];
  if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    v6 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        MiWalkResetCommitPages(i);
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
  if ( v11 )
    MiReturnCommit(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 1838)), v11);
  v12 = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v13 = ExAcquireSpinLockExclusive(v12);
  *((_DWORD *)v12 + 1) = 0;
  v16 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v17 = *(_QWORD *)(v5 + 32);
  if ( v17 <= v11 )
    v18 = 0LL;
  else
    v18 = v17 - v11;
  *(_QWORD *)(v5 + 32) = v18;
  v4[1] += v11;
  MiUnlockWorkingSetExclusive(a1 + 1664, v13, v14, v15);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL);
  return KeSetEvent(v16, 0, 0);
}
