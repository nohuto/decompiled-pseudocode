/*
 * XREFs of MiExpandSystemCache @ 0x140355238
 * Callers:
 *     MiObtainSystemCacheView @ 0x14029FD70 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140210FBC (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x140213B74 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiExpandSystemCache(__int16 *a1)
{
  _QWORD *Pool; // rsi
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int16 v6; // bx
  unsigned __int64 v7; // r14
  _QWORD *v8; // rcx
  unsigned int i; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int16 **v13; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  __int128 v22; // [rsp+50h] [rbp-11h]
  __int128 v23; // [rsp+60h] [rbp-1h]
  unsigned __int64 v24; // [rsp+70h] [rbp+Fh]
  __int128 v25; // [rsp+78h] [rbp+17h]
  __int128 v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+98h] [rbp+37h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int64)qword_140C66E08 <= 0x4000000 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x140uLL, 0x6353694Du);
  if ( !Pool )
    return 0LL;
  v4 = MiObtainSystemVa(1u, 8LL, v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_15:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 4088,
                        0,
                        8,
                        0) )
  {
    MiReturnSystemVa(v5, v5 + 0x200000, 8, 0LL);
    goto LABEL_15;
  }
  v6 = *a1;
  v7 = v5;
  KeAcquireInStackQueuedSpinLock(qword_140C671B0, &LockHandle);
  v8 = Pool + 4;
  for ( i = 0; i < 8; ++i )
  {
    v10 = *v8 & 0xFFFFFFFFFFFF003FuLL;
    *(v8 - 2) = v7;
    v11 = ((unsigned __int64)(v6 & 0x3FF) << 6) | v10;
    *v8 = v11;
    v12 = v11 & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      v27 = v12;
      v25 = 0LL;
      v26 = 0LL;
      *v8 = v12;
      v13 = (__int16 **)*((_QWORD *)a1 + 248);
      if ( *v13 != a1 + 988 )
        __fastfail(3u);
      *(v8 - 3) = v13;
      *(v8 - 4) = a1 + 988;
      *v13 = (__int16 *)(v8 - 4);
      *((_QWORD *)a1 + 248) = v8 - 4;
    }
    else
    {
      v24 = v12 | 0x8000000000000000uLL;
      v22 = 0LL;
      v23 = 0LL;
      *v8 = v12 | 0x8000000000000000uLL;
    }
    v8 += 5;
    v7 += 0x40000LL;
  }
  *((_QWORD *)a1 + 249) += 7LL;
  *(_QWORD *)(48 * ((*(_QWORD *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL
            + 16) = Pool;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return Pool;
}
